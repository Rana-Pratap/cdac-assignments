/*
11. Write a program to find factorial of given number.
*/
#include<stdio.h>
int main(void){
	int num,i,ans=1;
	
	printf("Enter the number  find its factorial :: ");
	scanf("%d",&num);
	printf("Factorial of %d is : \n",num);

	for(i=1;i<=num;i++){
		printf("%d*",i);
		ans*=i;
	}
	printf("\b=%d\n",ans);
	return 0;
}
