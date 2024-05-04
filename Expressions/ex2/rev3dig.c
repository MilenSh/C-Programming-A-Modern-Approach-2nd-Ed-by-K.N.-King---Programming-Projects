/* Reverse three digit number */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num;
	printf("Enter three digit number: ");
	scanf("%d", &num);
	printf("Reversal: %d%d%d", num%10, (num%100)/10, num/100);
	return 0;
}