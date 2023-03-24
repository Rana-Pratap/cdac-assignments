/*
20. Write a program to display
a. Prime numbers between 1 to 100
b. Armstrong Numbers between 1 to 500
*/
#include<stdio.h>
int main(void){
    int num,flag;
  
    printf("Enter the number :: ");
    scanf("%d",&num);
/*   
    printf("Prime numbers are: ");
    for(int i=3;i<=num;i++){
        flag=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=1;
               // printf("flag=%d for i=%d and j=%d\n ",flag, i, j);
                break;
            }
        }
        if(flag==0){
            printf("%d, ",i);
        }
    }
*/ 
    printf("Armstrong numbers are: ");

    printf("\n");
    return 0;
}