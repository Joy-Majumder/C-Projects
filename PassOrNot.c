#include<stdio.h>
// by joy
int main () {

	int math,physics,bio,chemistry;
	
	printf("Enter marks of Math : \n");
	scanf("%d",&math);

	printf("Enter marks of physics : \n");
	scanf("%d",&physics);
	
	printf("Enter marks of Biology : \n");
	scanf("%d",&bio);
	
	printf("Enter marks of Chemistry : \n");
	scanf("%d",&chemistry);

	int totalMarks;
	totalMarks = (math + physics + bio + chemistry); // 3;

	if ((totalMarks<33) || math<33 || physics<33 || bio<33 || chemistry<33) {
		printf("Opps! you failed & your marks is : %d out of 400\n", totalMarks);
	} else if ((totalMarks>=33) && math>=33 && physics>=33 && bio>=33 && chemistry>=33) {
		printf("Congratulations! you got passed & your marks is : %d out of 400\n",totalMarks);
	}

	return 0;
}
