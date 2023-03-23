/*
Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message.
*/

#include<stdio.h>

int main(void){
    int no1, no2;
    printf("Enter any two values to divide.\n");
    printf("First Number: ");
    scanf("%d",&no1);
    printf("Second Number: ");
    scanf("%d",&no2);

    if(no2==0)
        printf("Cannot divide by Zero!!\n");
    else
        printf("Division is: %d\n", no1/no2);

    return 0;
}