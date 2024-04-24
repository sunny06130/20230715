#include<process_copy.h>

int BLOCK_CUR(char* src,int pronum){
	int fd=open(src,O_RDONLY);
	if(-1==fd){
	perror("blocksize open error");
	return -1;
	
	}
	int size=lseek(fd,0,SEEK_END);
	int blockSize=size/pronum+1;
	return blockSize;
}
