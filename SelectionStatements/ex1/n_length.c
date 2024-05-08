/* returns lenth */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, length;
	printf("Enter a number");

	if (n>=0 && n<10)
	{
		length = 1;
	} else if (n>=10 && n<100){
		length = 2;
	} else length = 3;

	return 0;
}