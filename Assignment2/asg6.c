/*
Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome).Using if-else
*/
#include<stdio.h>
int main(void){
    int no,ono,rem;
	int res=0;
    printf("\nEnter any 5 digit number: ");
    scanf("%d",&no);
	
	ono=no;
	
	rem=no%10;				//rem=3
	res=(rem+res)*10;		//res=30
	no/=10;					//no=12

	rem=no%10;				//rem=3
	res=(rem+res)*10;		//res=30
	no/=10;					//no=12

    rem=no%10;				//rem=3
	res=(rem+res)*10;		//res=30
	no/=10;					//no=12
	
    rem=no%10;				//rem=3
	res=(rem+res)*10;		//res=30
	no/=10;					//no=12
	
    rem=no%10;				//rem=3
	res=(rem+res)*10;		//res=30
	no/=10;					//no=12
	
    rem=no%10;				//rem=3
	res=(rem+res)*10;		//res=30
	no/=10;					//no=12
	
	res/=100;

	if(res==ono)
		printf("Number %d is palindrome.\n",ono);
	else
		printf("Number %d is not palindrome.Its reversed is %d.\n",ono,res);
    
	//printf("rem=%d, res=%d, no=%d",rem,res,no);

	// 123%10   3    (3+0)*10=30
	// 123/10
	// 12%10	2	 (30+2)*10=320
	// 12/10
	// 1%10		1	(320+1)*10=3210
	// 1/10
	// 0
	// 3210/10=321
	// compare(123==321)
	// if yes
	// 	-pf(no is palindrome)
	// if no
	// 	-pf(no is not palindrome)
	

    return 0;
}
