#include<stdio.h>
#include<stdlib.h>
void main(int argc,char* argv[]){
	float a=0, b=0;
	if(argc!=3){
		printf("\n");
		printf("Please provide only 2 numbers to add.");
		printf("\n");
		exit(1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("\n");
	printf("Addition is %.2f",(a+b));
	printf("\n");
}
