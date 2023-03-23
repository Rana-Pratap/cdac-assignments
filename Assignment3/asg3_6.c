/*
6. Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12
*/
#include<stdio.h>
int main(void){
	int num, val=1;
	
	printf("Enter any Number to find its factor::");
	scanf("%d",&num);
	
	printf("The factorials of %d are ",num);
	while(val<num){
		if(num%val==0)
			printf(" %d,",val);
		val++;
	}
	printf("\b.\n");

	return 0;
}
