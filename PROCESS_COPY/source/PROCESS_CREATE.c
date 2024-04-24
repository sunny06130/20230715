#include<process_copy.h>

int PROCESS_CREATED(char* src,char *dest,int pronum,int blockSize){
	pid_t pid;
	int pos=0;
	for(int i=0;i<pronum;i++){
		pos=blockSize*i;
		pid=fork();
		if(pid==0)break;
	}
		if(pid>0){
			
			PROCESS_WAIT();
		}
		else if(pid==0) {
			char str_pos[20];
			snprintf(str_pos,sizeof(str_pos)-1,"%d",pos);
			char str_blk[20];
                        snprintf(str_blk,sizeof(str_blk),"%d",blockSize);
			execl("/home/Desktop/PROCESS_COPY/mod/mod","mod","src","dest","str_pos","str_blk",NULL);
			exit(0);
		}
		else{
			perror("fork failed\n");
			exit(0);
		}
	
	

}


