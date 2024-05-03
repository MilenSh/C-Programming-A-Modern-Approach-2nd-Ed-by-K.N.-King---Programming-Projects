#include <stdio.h>

float balance_after_payment(float, float, float);

int main(int argc, char const *argv[])
{
	float loan, rate, monthlyRate, payment;

	printf("Enter amount to loan: ");
	scanf("%f", &loan);

	printf("Enter interest rate: ");
	scanf("%f", &rate);

	printf("Enter monthly payment: ");
	scanf("%f", &payment);

	monthlyRate = (rate / 100) / 12;

	loan = balance_after_payment(loan, monthlyRate, payment);

	printf("Balance remaining after first payment: $%.2f\n", loan);

	loan = balance_after_payment(loan, monthlyRate, payment);

	printf("Balance remaining after second payment: $%.2f\n", loan);

	loan = balance_after_payment(loan, monthlyRate, payment);

	printf("Balance remaining after third payment: $%.2f\n", loan);

	return 0;
}

float balance_after_payment(float balance, float monthlyRate, float payment)
{
	float output, addedSum;

	addedSum = balance * monthlyRate;

	output = balance - payment + addedSum;

	return output;
}