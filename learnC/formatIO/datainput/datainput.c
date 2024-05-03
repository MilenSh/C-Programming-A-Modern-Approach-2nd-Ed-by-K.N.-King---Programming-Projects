#include <stdio.h>

int main(int argc, char const *argv[])
{
	int dd, mm, yyyy;

	printf("Enter date (dd/mm/yyyy): ");

	scanf("%d/%d/%d", &dd, &mm, &yyyy);

	printf("You entered date: %d%2d%2d \n", yyyy, mm, dd);

	return 0;
}