/* checks if upc is valid */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, j6, first_sum, second_sum, total, check;

	printf("Enter first eleven digits of a UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &j6);
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;
	check = 9 - ((total - 1) % 10);

	if (j6 != check)
		printf("Invalid UPC");
	else
		printf("Valid UPC");
			
	return 0;
}