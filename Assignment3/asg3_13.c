/*
13. Write a program to display n terms of Fibonacci series
Input: 6
Output: 1, 1, 2, 3, 5, 8
*/
#include<stdio.h>
int main(void){
	int num,i,ans,no1,no2;
	printf("Enter the number of Fibonacci series member you want to print :: ");
	scanf("%d", &num);
	printf("\n");	
	ans=0,no1=0,no2=1;
	for(i=1;i<num;i++){
		ans = no1 + no2;
		printf(" %d ",no1);
		no1 = no2;
		no2 = ans;
	}
	printf(" %d \n", no1);
	// num+num
	return 0;
}
