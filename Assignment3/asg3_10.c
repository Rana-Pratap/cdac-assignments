/*
10. Write a program to print table of given number.
*/
#include<stdio.h>
int main(void){
	int num;
	printf("Enter the number to print table :: ");
	scanf("%d",&num);

	for(int i=0;i<=10;i++){
		printf("\n%d x %d = %d", num, i, num*i);
	}
	printf("\n");
	return 0;
}
