#include <stdio.h>

int x_in_n(int x, int n);

int main(int argc, char const *argv[])
{
	int input, a;

	printf("Enter a dollar amount: ");
	scanf("%d", &input);

	a = x_in_n(20, input);
	input = input - (20 * a);
	printf("$20 bills: %d\n", a);

	a = x_in_n(10, input);
	input = input - (10 * a);
	printf("$10 bills: %d\n", a);

	a = x_in_n(5, input);
	input = input - (5 * a);
	printf(" $5 bills: %d\n", a);

	a = x_in_n(1, input);
	printf(" $1 bills: %d\n", a);

	return 0;
}

int x_in_n(int x, int n)
{
	int output = 0;

	if (x>n)
	{
		return 0;
	}

	while (x<=n)
	{
		n = n-x;
		output++;
	}

	return output; 
}