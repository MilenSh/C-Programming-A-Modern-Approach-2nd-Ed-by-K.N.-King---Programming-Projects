#include <stdio.h>

int main(int argc, char const *argv[])
{
	int hour, minute;
	
	printf("Enter time in 24-hour format: ");
	scanf("%d:%d", &hour, &minute);

	if (hour>12)
	{
		hour -= 12; 
		printf("Equivalent in 12-hour format: %d:%.2d PM", hour, minute);
	} else {
		printf("Equivalent in 12-hour format: %d:%.2d AM", hour, minute);
	}

	return 0;
}