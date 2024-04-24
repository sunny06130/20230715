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
int PRAM_CHECK(int argc,int pronum,char *src);

int PROCESS_CREATED(char *Src,char *Dest ,int Pronum,int Block);

int BLOCK_CUR(char *Src,int Pronum);

int PROCESS_WAIT();





