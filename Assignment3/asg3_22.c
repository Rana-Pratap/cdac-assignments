/*
22.	Print following patterns
*/

#include<stdio.h>
int main(void){
	int i,j;
/*
	*
	* *
	* * *
	* * * *
	* * * * *



	for(i=0;i<5;i++){
		for(j=0;j<=i;j++){
			printf(" * ");
		}
		printf("\n");
	}	
	return 0;
}
*/

/*
	* * * * *
	* * * *
	* * *
	* *
	*

	for(i=0;i<5;i++){
		for(j=i;j<5;j++){
			printf(" * ");
		}
		printf("\n");
	}
*/
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5


	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf(" %d ",j);
		}
		printf("\n");
	}
*/
/*
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1

	for(i=5;i>=1;i--){
		for(j=5;j>=i;j--){
			printf(" %d ",j);
		}
		printf("\n");
	}
*/	

/*
A
B C
D E F
G H I J

	int k=65;
	for(i=4;i>=1;i--){
		for(j=4;j>=i;j--){
			printf(" %c ",k);
			k+=1;
		}
		printf("\n");
	}
*/	

/*
A B C D
B C D
C D
D
*/
	int k=65,l=3;
	for(i=0;i<4;i++){
		for(j=i;j<4;j++){
			printf(" %c ",k);
			k+=1;
		}
		k-=l;
		l--;
		printf("\n");
	}
	return 0;
}
