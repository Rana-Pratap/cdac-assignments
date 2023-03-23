/*
	Write a program to accept a number and
	a. Calculate sum of digits of integer
		
		Input: 9362
		Output: 9 + 3 + 6 + 2 = 20

	b. Reverse the number
		
		Input: 9362
		Output: 2639

	c. Check whether given number is numeric palindrome or not
		
		Input: 9362
		Output: 9362 is not a numeric palindrome
		
		Input: 36963
		Output: 36963 is a numeric palindrome

	d. Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
	   then the number is called as Armstrong number)
		Example: 153
		(1 * 1 * 1)+(5 * 5 * 5)+(3 * 3 * 3) = 1 + 125 + 27 = 153
		
		Input: 936
		Output: 936 is not an Armstrong number
		
		Input: 153
		Output: 153 is an Armstrong number
*/
#include<stdio.h>
int main(void){
	int num,rem,ans=0,ono,rev=0,ams=0;

	printf("Enter any number:: ");
	scanf("%d",&num);
	ono=num;

	while(num!=0){
	rem=num%10;
	ams+=rem*rem*rem;
	num/=10;
	printf("%d+",rem);
	rev=(rem+rev)*10;
	ans+=rem;
	}
	printf("\b=%d\n",ans);
	printf("Reverse of Number %d is :: %d.\n",ono,rev/=10);

	rev==ono?printf("Number %d is Palindrome.\n",ono):printf("Number %d is not Palindrome.\n",ono);
	ams==ono?printf("Number %d is Armstrong.\n",ono):printf("Number %d is not Armstrong.\n",ono);
	return 0;
}
