/* Computes the dimensional weight of a box by given dimensions */

#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
	int h, l, w, vol, weight;

	printf("Enter height of box: ");
	scanf("%d", &h);
	printf("Enter lenght of box: ");
	scanf("%d", &l);
	printf("Enter width of box: ");
	scanf("%d", &w);

	vol = h*l*w;
	weight = (vol + INCHES_PER_POUND-1) / INCHES_PER_POUND;

	printf("Dimensions: %dx%dx%d\n", l, w, h);
	printf("Volume (cubic inches): %d\n", vol);
	printf("Dimensional weight (pounds): %d\n", weight);

	return 0;
}