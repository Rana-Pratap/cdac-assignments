//Write a program to accept a number and print the number in character, decimal, octal and hex
//formats.

#include<stdio.h>

int octal(int no);

int main(void){
	printf("enter any number\n");
	int no,val;
	scanf("%d",&no);

	// Printing number in  character 
	printf("%d in character is : %c\n", no, no);

	// Printing number in decimal 
	printf("%d in decimal is : %d", no,no);

	val=octal(no);	
/*
	//Printing number in octal
	int tmp;
	//while(n==1){
	tmp=no/8;
	no=tmp;
	
	printf("%d", tmp);
//	printf("%d in octal is: %");
*/
return 0;
}

int octal(int no){
	
	
   // printf("Enter any value whose octal value you want:\n");
   // scanf("%d",&no);
    int val=no;
    int rem;
      
    printf("\nThe Octal value of %d is : '", val);
      
    while(val>7){
        rem = val%8;
        val = val/8;
        printf("%d",rem);
  }
 printf("%d'\n",val);


return val;
}
