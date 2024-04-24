#include<process_copy.h>



int main(int argc,char* argv[]){
	int pronum=0;
	char* Src=argv[1];
	char* Dest=argv[2];
 		if(argv[3]==0){
			pronum=5;
		}
		else{
			pronum=atoi(argv[3]);
		}

	int is_Ok=PRAM_CHECK(argc,pronum,Src);//jiaoyan 
	
		
	int blockSize=BLOCK_CUR(Src,pronum);//ren wu liang ji suan

	is_Ok= PROCESS_CREATED(Src,Dest,pronum,blockSize);
		if(is_Ok==0){
			printf("create thread error\n");
			return -1;
		}
	
	

	
return 0;
}
