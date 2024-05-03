#include <stdio.h>

#define FRACTION_VOLUME_SPHERE (4.0f/3.0f)
#define PI 3.1415f

int main(int argc, char const *argv[])
{
	float volume, r;

	printf("Enter radius of sphere: ");
	scanf("%f", &r);

	volume = FRACTION_VOLUME_SPHERE * PI * r * r * r;

	printf("Volume: ");
	printf("%.1f\n", volume);

	return 0;
}