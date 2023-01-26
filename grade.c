#include <stdio.h>

int main () {

	int grades;
	printf("Enter yours marks here : ");
	scanf("%d", &grades);
	if (grades > 100) {
		printf("sorry your marks isn't valid, try again \n");
	} else if (grades) {
		switch (grades/10) {
			case 9:
				printf("Congrats! you got A+ grade");
				break;

			case 8 :
				printf("Congrats! you got A grade");
				break;

			case 7 :
				printf("Congrats! you got A- grade");
				break;
			case 6 :
				printf("you got B grade");
				break;
			case 5 :
				printf("you got B- grade");
				break;
			case 4 :
				printf("you got C grade");
				break;
			case 3 :
				printf("you got D grade");
				break;
			case 2 :
				printf("you got F grade");
				break;
			case 1 : 
				printf("you got F grade");
				break;
			case 0 :
				printf("you got F grade");
				break;
			default :
				printf("Enter a valid marks");
				break;
		}
	}	

	return 0;
}
