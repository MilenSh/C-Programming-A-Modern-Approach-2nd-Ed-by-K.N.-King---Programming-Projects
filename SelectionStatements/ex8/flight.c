#include <stdio.h>

int main(int argc, char const *argv[])
{
	int time, hour, minute;
	
	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hour, &minute);
	
	total = hour * 60 + minute;

	if (total > 480 && total <= 583)
	{
		if (total - 480 <= 583 - total)
		{
			printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
		} else {
			printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
		}
	} else if (total > 583 && total <= 679)
	{
		if (total - 583 <= 679 - total)
		{
			printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
		} else {
			printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
		}
	} if (total > 679 && total <= 767)
	{
		if (total - 679 <= 767 - total)
		{
			printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
		} else {
			printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
		}
	}

	return 0;
}