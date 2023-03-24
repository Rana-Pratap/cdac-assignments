/*

12. Write a program to accept integer values of base and index and calculate power of base to
index.
Input:
base: 2	 index: 5		Output: 32
Input:
base: 8	 index: 8			Output: 512

*/
#include<stdio.h>
int main(void){
	int num, base, ans, i;
	
	printf("Enter the power of base 2 to find the output :: ");
	scanf("%d", &num);
	
	ans=1,base=2;
	for(i=1;i<=num;i++){
		ans*=base;
//		printf("ans=%d\n",ans);
		printf("%d*",base);
	}
	printf("\b = %d\n",ans);
	return 0;
}
