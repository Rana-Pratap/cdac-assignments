/*
Write a program to find factorial of given number.Input: 5
Output: 5 * 4 * 3 * 2 * 1 = 120
*/

#include<stdio.h>
int main(void){
	int num,ans=1;

	printf("Enter any Number::");
	scanf("%d",&num);

	while(num!=0){
		ans*=num;
		printf("%d * ",num);
		num--;
	}
	printf("\b\b = %d\n",ans);

	return 0;
}
