#include<process_copy.h>
int PROCESS_WAIT(){
	pid_t pid;
	while((pid=waitpid(-1,NULL,WNOHANG))!=-1){	
		if(pid>0){
			printf("waitpid success");
	}
	}
	return 0;
}
