/* returns the earier of two entered dates */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int mm1, mm2, dd1, dd2, year1, year2;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%2d/%2d/%2d", &mm1, &dd1, &year1);
	printf("Enter second date (mm/dd/yyyy): ");
	scanf("%2d/%2d/%2d", &mm2, &dd2, &year2);
	
	if (year1 < year2)
	{
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm1, dd1, year1, mm2, dd2, year2);
	} else if(year1 > year2) {
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm2, dd2, year2, mm1, dd1, year1);
	} else {
		if (mm1 < mm2)
		{
			printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm1, dd1, year1, mm2, dd2, year2);
		} else if (mm2 > mm1)
		{
			printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm2, dd2, year2, mm1, dd1, year1);
		} else {
			if (dd1 < dd2)
			{
				printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm1, dd1, year1, mm2, dd2, year2);
			} else if (dd1 > dd2)
			{
				printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm2, dd2, year2, mm1, dd1, year1);
			} else printf("You have entered the same date twice.");
		}
	}

	return 0;
}