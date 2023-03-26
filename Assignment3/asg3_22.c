/*
22.	Print following patterns
*/

#include<stdio.h>
int main(void){
	int i,j,k;
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

/*
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
*/
	

/*
			G
		E F G F E
	C D E F G F E D C
A B C D E F G F E D C B A
	C D E F G F E D C
		E F G F E
			G
*/  
	int val=70,num=4;
	for(i=1;i<=num;i++){
		for (j=2*i;j<=7;j++){
			printf("   ");
		}
		for(k=1;k<2*i;k++){
			printf(" %c ",val+k);
		}
		
		printf("\b\b\b");

		for(k=1;k<2*i;k++){
			int val2=72;
			printf(" %c ",val2-k);
		}

		printf("\n");
		val-=2;
	}
	val=65;
	for(i=1;i<num;i++){
		for (j=1;j<=2*i;j++){
			printf("   ");
		}
		for(k=2*i;k<=6;k++){
			printf(" %c ",val+k);
		}
		
		printf("\b\b\b");
		int val2=72,m=1;
		for(k=2*i;k<=6;k++){
			
			printf(" %c ",val2-m);
			m++;
		}
		
		printf("\n");
		
	}
	
	return 0;
}
