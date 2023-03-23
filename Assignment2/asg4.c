/*
Write a program to find maximum of two numbers using
a. If – else
b. conditional operator.
*/
#include<stdio.h>

int main(void){
    int n1, n2;
    printf("Enter any two numbers to compare: \n");
    printf("Number 1: ");
    scanf("%d",&n1);
    printf("Number 2: ");
    scanf("%d",&n2);
/*
    if(n1>n2)
        printf("%d is greater than %d\n",n1,n2);
    else if(n1==n2)
        printf("%d is equal to %d\n",n1,n2);
    else
        printf("%d is smaller than %d\n",n1,n2);
    
*/
    
    
    n1>n2?printf("%d is greater than %d\n",n1,n2):n1==n2?printf("%d is equal to %d\n",n1,n2):printf("%d is smaller than %d\n",n1,n2);
    

    return 0;
}