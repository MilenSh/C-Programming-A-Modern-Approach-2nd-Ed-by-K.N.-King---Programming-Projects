/* Convert Fahrenheit to Celsius */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
	float far, cel;

	printf("Enter temperature in fahrenheit: ");
	scanf("%f", &far);

	cel = (far - FREEZING_PT) * SCALE_FACTOR;

	printf("Temperature in celsius: %.1f\n", cel);

	return 0;
}