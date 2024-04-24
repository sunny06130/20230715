#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<pthread.h>
#include<sys/wait.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<math.h>

int main(int argc,char*argv[]){
int fd= open(argv[1],O_RDONLY);

int pos =atoi(argv[3]);
int blockSize=atoi(argv[4]);
char buffer[blockSize];
memset (buffer,0,sizeof(buffer));
lseek(fd,pos,SEEK_SET);
read(fd,buffer,blockSize);

int fd2=open(argv[2],O_WRONLY);
lseek(fd2,pos,SEEK_SET);

write(fd2,buffer,blockSize);
close(fd2);
close(fd);

return 0;
}



