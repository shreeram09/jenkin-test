#include<stdio.h>
#include<stdlib.h>
void main(int argc,char* argv[]){
	float a=0, b=0;
	if(argc!=3){
		printf("please provide only 2 numbers to add.");
		exit(1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("addition is %.2f",(a+b));
}
