#include<process_copy.h>

int PRAM_CHECK(int argc,int pronum,char* src){
	if(argc<3)
		exit(0);
	if(access(src,F_OK)!=0)
		printf("file not exist\n");
		exit(0);
	if(pronum<0||pronum>100)
		printf("pronum not right\n");
		exit(0);

return 1;
}

