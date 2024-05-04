#include <stdio.h>

int main(int argc, char const *argv[])
{
	int code, mid, end;

	printf("Enter phone number [(xxx) xxx-xxxx] : ");
	scanf("(%d) %d-%d", &code, &mid, &end);
	printf("You entered %d.%d.%d", code, mid, end);
	return 0;
}