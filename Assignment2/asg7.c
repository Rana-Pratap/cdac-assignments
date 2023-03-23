/*
Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator
*/

#include<stdio.h>
int main(void){
	int year;
	int days=365;
	printf("Enter any year to check whether leap year or not: ");
	scanf("%d",&year);
	// a. Without using logical operators
	if(year%4==0){
		
		if(year%100==0){
			if(year%400==0)
				printf("Year %d is leap year.It has %d days.\n",year,days+=1);
			else
				printf("Year %d is not leap year.It has %d days.\n",year,days);
			return 0;	
		}
		printf("year is leap year\n");
	}
	else
		printf("Year %d is not leap year.It has %d days.\n",year,days);


/*
    //b. Using logical operators

	if(year%4==0 && year%100!=0 || year%400==0)
		printf("Year %d is leap year.It has %d days.\n",year,days+=1);
	else
		printf("Year %d is not leap year.It has %d days.\n",year,days);
*/

    //c. Using conditional operators
    
//    (year%4==0&&year%100!=0||year%400==0)?printf("Year %d is leap year.It has %d days.\n",year,days+=1):printf("Year %d is not leap year.It has %d days.\n",year,days);

    return 0;
}
