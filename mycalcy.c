#include<stdio.h>
#include<stdlib.h>
void main(int* argc,char* argv[]){
	float a=0, b=0;
	if(argc!=3){
		printf("please provide only 2 numbers to add.");
		exit(1);
	}
	printf("\nfirst number:");
	scanf("%f",&a);
	printf("\nSecond number:");
	scanf("%f",&b);
	printf("addition is %.2f",(a+b));
}
