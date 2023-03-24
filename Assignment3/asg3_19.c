/*
19. Modify above program (18) to accept a range i.e. two numbers and print tables of numbers
	within the range.
	
	Input: 3 6
	Output:
	3  4  5  6
	6  8  10 12
   	9  12 15 18
	12 16 20 24
	15 20 25 30
	18 24 30 36
	21 28 35 41
	24 32 40 48
	27 36 45 54
	30 40 50 60
*/
#include<stdio.h>
int main(void){
	int l, u, i, j;
	printf("Enter the lower limit and upper limit  of table :: ");
	printf("\nLower Limit :: ");
	scanf("%d",&l);
	printf("\nUpper Limit :: ");
	scanf("%d",&u);
	printf("\n");	
	for(i=1;i<=10;i++){
		for(j=l;j<=u;j++){
			printf("%5d",i*j);
		}
		printf("\n");
	}
//	printf("%d and %d ",l,u);

	return 0;
}
