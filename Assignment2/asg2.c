/*
Input a number and display whether number is Even or Odd.
*/
#include<stdio.h>

int main(void){
    int no1;
    printf("Enter any number: \n");
    scanf("%d", &no1);

    if(no1%2)
        printf("%d is Odd.\n", no1);
    else
        printf("%d is Even.\n", no1);

    return 0;
}