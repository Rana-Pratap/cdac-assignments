/*
Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
******
*/
#include<stdio.h>
int main(void){
/*
// Number of digit
int no;
printf("Enter the number:\n");
scanf("%d",&no);

int counter=0;
while(no!=0){
	counter++;
	no/=10;
}
printf("The number of digits is :: %d\n",counter);
*/

// Number of character
char ch;
int num;
printf("Enter a character you want to print:: ");
scanf("%c",&ch);
printf("\nEnter the number of times you want to print the character:: ");
scanf("%d",&num);
while(num>0){
	printf("%c", ch);
	num--;
}
printf("\n");
return 0;
}
