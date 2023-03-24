/*
14. Write a program to accept a number and check whether it is Prime no.
*/
#include<stdio.h>
int main(void){
	int num,i;

	printf("\nEnter the to find whether it is Prime or not :: ");
	scanf("%d",&num);
	
//	flag=0;
	for(i=2;i<num;i++){
		if(num%i==0){
			printf("\nNumber %d is NOT Prime.\n",num);
			return 0;
		}
//		printf("\nNumber is Prime.\n");
	}
	printf("\nNumber is Prime.\n");
	

	return 0;
}
