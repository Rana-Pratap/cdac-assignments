// Write a program to accept number and check whether the number is +ve, -ve and zero.

#include<stdio.h>

int main(void){
    int num;
    printf("Enter any number: \n");
    scanf("%d", &num);

    if(num>0)
        printf("%d is Positive\n", num);
    else if(num==0)
        printf("%d is Zero\n", num);
    else
        printf("%d is Negative\n",num);

    return 0;
}