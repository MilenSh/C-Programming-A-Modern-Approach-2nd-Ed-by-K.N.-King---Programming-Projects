#include <stdio.h>

#define FIVE_PERCENT 0.05f

int main(int argc, char const *argv[])
{
	float input, output;
	printf("Enter an amount: ");
	scanf("%f", &input);
	output = input + (input * FIVE_PERCENT);
	printf("With tax added: %.2f\n", output); 
	return 0;
}