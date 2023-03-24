/*
18. Write a program to print the tables of the numbers from 1 to 10.
*/
#include<stdio.h>
int main(void){
	
	int num,i,j;

	printf("Press 1 to print table :: ");
	scanf("%d",&num);

	if(num==1){
		for(i=1;i<=10;i++){
			for(j=1;j<=10;j++){
				printf("%d x %d = %d\n",i,j,i*j);
			}
		printf("\n===================================\n");
		}
	
	}
	else
		printf("\nSo bad, you don't wanna learn table :c\n");

	return 0;
}
