/*
Write a program to find maximum of three numbers using
a. If – else
b. conditional operator.
*/
#include<stdio.h>

int main(void){
    int n1, n2, n3;
    printf("Enter any two numbers to compare: \n");
    printf("Number 1: ");
    scanf("%d",&n1);
    printf("Number 2: ");
    scanf("%d",&n2);
    printf("Number 3: ");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3)
        printf("Number 1 ie %d is maximum.\n",n1);
    else if(n2>n3)
        printf("Number 2 ie %d is maximum.\n",n2);
    else if(n1==n2 || n1==n3)
        printf("All three are maximum.\n");

    else
        printf("Number 3 ie %d is maximum.\n",n3);


    return 0;
}