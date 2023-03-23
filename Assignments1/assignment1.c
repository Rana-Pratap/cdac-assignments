#include<stdio.h>

int main(void){
//	int no1, no2;
	char no1, no2;
	int ans;

	// Accept two numbers
	printf("Enter any two numbers?");
	scanf("%d",&no1);
	scanf("%d",&no2);
	
//	scanf("%c", &no1);
//	scanf("%*c%c",&no2);

	// a. Addition of two numbers.
	ans = no1 + no2;
//	printf("\nThe sum of two given numbers is:\n %d + %d = %d\n",no1,no2,ans);
	printf("\n The sum of two numbers is:\n %d + %d = %c\n",no1,no2,ans);	
	//b. Subtraction of two numbers.
	ans = no1 - no2;
	printf("\nThe difference of given numbers is:\n %d - %d = %d\n", no1, no2, ans);

	ans = no1 * no2;
	printf("\nThe multiplication of given numbers is:\n %d * %d = %d\n", no1, no2, ans);
return 0;
}
