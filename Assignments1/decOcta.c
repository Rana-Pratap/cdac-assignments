#include<stdio.h>

int main(void){
	int no;
	printf("Enter any value whose octal value you want:\n");
	scanf("%d",&no);
	int val=no;
	int rem;

	printf("\nThe Octal value of %d is : '", val);

	while(val>7){
		rem = val%8;
		val = val/8;
		printf("%d",rem);
}
printf("%d'\n",val);
	
//	printf("%d and remainder %d\n",val, rem);

	return 0; 
}
