#include <stdio.h>

int main(int argc, char const *argv[])
{
	int grade;
	
	printf("Enter numerical grade: ");
	scanf("%d", &grade);

	if (grade<=100 && grade>=0)
	{
		switch(grade/10) {
			case 10: printf("Letter grade: A\n");
				break;
			case 9: printf("Letter grade: A\n");
				break;
			case 8: printf("Letter grade: B\n");
				break;
			case 7: printf("Letter grade: C\n");
				break;
			case 6: printf("Letter grade: D\n");
				break;
			default: printf("Letter grade: F\n");
				break;
		}
	}else printf("Invalid grade");


	return 0;
}