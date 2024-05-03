#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, mm, dd, yyyy;
	float price;

	printf("Enter item number: ");
	scanf("%d", &n);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &dd, &mm, &yyyy);

	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%-5.2f\t\t%.2d/%.2d/%d",n ,price, dd, mm, yyyy);

	return 0;
}