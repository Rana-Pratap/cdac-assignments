/*
15.	Modify the menu driven program for four function calculator. Add a menu item to choose
	option exit. The program continues till user chooses option exit.
*/
#include<stdio.h>
int main(void){
	int ch,n1,n2;
	do{
		printf("Enter Number 1 :: ");
		scanf("%d",&n1);

		printf("Enter Number 2 :: ");
		scanf("%d",&n2);
	
		printf("\n====================================================================\n");
		printf("\n1.ADDITION   2.SUBSTRACTION   3.MULTIPLICATION   4.DIVISION   0.EXIT\n");
		printf("\n====================================================================\n");
		printf("Enter your choice or 0 to EXIT :: ");
		scanf("%d",&ch);
		switch(ch){
			default: printf("Please enter valid option.\n");break;

			case 1: printf("Addition of Number are :: %d + %d = %d\n",n1,n2,n1+n2);break;

			case 2: printf("Addition of Number are :: %d - %d = %d\n",n1,n2,n1-n2);break;

			case 3: printf("Addition of Number are :: %d * %d = %d\n",n1,n2,n1*n2);break;

			case 4: printf("Addition of Number are :: %d / %d = %d\n",n1,n2,n1/n2);break;
			
			case 0: return 0;

		}
		printf("\nEnter 1 to CONTINUE OR  0 to EXIT :: ");
		scanf("%d",&ch);

	}while(ch!=0);

	return 0;
}
