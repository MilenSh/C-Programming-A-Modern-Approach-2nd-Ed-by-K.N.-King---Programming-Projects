#include <stdio.h>


int power_num(int a, int n);

int main(int argc, char const *argv[])
{
	int x, answer;

	printf("Please enter value of x: ");
	scanf("%d", &x);
 	
 	//POLYNOM USING CUSTOM METHOD
	//answer = 3 * power_num(x,5) + 2 * power_num(x, 4) - 5 * power_num(x, 3) - power_num(x, 2) + 7 * x - 6;

	//POLYNOM HORNER RULE SOLVE
	answer = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

	printf("Answer: %d\n", answer);

	return 0;
}

int power_num(int a, int n)
{
	int pow = 1;
	for (int i = 0; i < n; ++i)
	{
		pow = pow * a;
	}

	return pow;
}