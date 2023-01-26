#include <stdio.h>

int main () {

	int year;
	printf("Enter a year for check that it's valid for leap year or not! : ");
	scanf("%d", &year);
	
	(year%4 == 0) ? 
		printf("Congratulations! it's a leap year") :
	   		printf("OPPS! sorry please try again");	
	
	return 0;
}

