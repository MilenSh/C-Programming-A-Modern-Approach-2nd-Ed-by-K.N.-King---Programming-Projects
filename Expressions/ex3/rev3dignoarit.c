/* Reverse three digit number without aritm */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n1, n2, n3;
	printf("Enter three digit number: ");
	scanf("%1d%1d%1d", &n1, &n2, &n3);
	printf("Reversal: %d%d%d", n3, n2, n1);
	return 0;
}