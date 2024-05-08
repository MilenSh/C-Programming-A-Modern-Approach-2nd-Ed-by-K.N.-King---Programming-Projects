#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;

	printf("Enter a two-digit number: ");
	scanf("%d", &number);

	switch(number) {
		case 10: printf("You entered number ten\n"); break; 
		case 11: printf("You entered number eleven\n"); break; 
		case 12: printf("You entered number twelve\n"); break; 
		case 13: printf("You entered number thirteen\n"); break; 
		case 14: printf("You entered number fourteen\n"); break; 
		case 15: printf("You entered number fifteen\n"); break; 
		case 16: printf("You entered number sixteen\n"); break; 
		case 17: printf("You entered number seventeen\n"); break; 
		case 18: printf("You entered number eighteen\n"); break; 
		case 19: printf("You entered number nineteen\n"); break; 
	}

	switch(number/10) {
		case 2: printf("You entered number twenty"); break; 
		case 3: printf("You entered number thirty"); break; 
		case 4: printf("You entered number forty"); break; 
		case 5: printf("You entered number fifty"); break; 
		case 6: printf("You entered number sixty"); break; 
		case 7: printf("You entered number seventy"); break; 
		case 8: printf("You entered number eighty"); break; 
		case 9: printf("You entered number ninety"); break; 
	}

	if (number>=20)
	{
		switch(number%10) {
		case 0: printf("\n"); break;
		case 1: printf("-one\n"); break;
		case 2: printf("-two\n"); break;
		case 3: printf("-three\n"); break;
		case 4: printf("-four\n"); break;
		case 5: printf("-five\n"); break;
		case 6: printf("-six\n"); break;
		case 7: printf("-seven\n"); break;
		case 8: printf("-eight\n"); break;
		case 9: printf("-nine\n"); break;
		}
	}
	
	if (number>=100)
	{
		printf("Number too big\n");
	}

	return 0;
}