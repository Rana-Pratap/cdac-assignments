/*
8. Write a program to accept a number and print its prime factors.
	
	Input: 180
	Output: 180 = 2 * 2 * 3 * 3 * 5
*/

#include<stdio.h>

int main(void){
	
	int num, counter, ono, ans, rem;

	printf("\nEnter your number to find its unique prime factors :: ");
	scanf("%d",&num);

	ono=num;
	ans=1;
	counter=2;
	while(num!=1){ 
		if(num%counter==0){
			num/=counter;
			printf("%d*",counter);
			ans*=counter;
		}
		else
//		{
//			printf("\nupdate counter");
			counter++;
//		}
	}
	printf("\b=%d\n",ans);
	ono=ans?printf("\n---Program Successful---\n"):printf("\n---Program Unsuccessful---\n");
	return 0;
}
