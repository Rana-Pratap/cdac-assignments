/*
	Write a program to find factorial of given number.
		Input: 5
		Output: 1 * 2 * 3 * 4 * 5 = 120
*/
#include<stdio.h>
int main(void){
	int num,i=1,ans=1;

	printf("Enter any Number::");
	scanf("%d",&num);

	while(num!=0){
		ans*=num;
		printf("%d * ",i);
		i++;
		num--;
	}
	printf("\b\b = %d\n",ans);

	return 0;
}
