/* calculates a broker commission */

#include <stdio.h>

int main(int argc, char const *argv[])
 {
 	int nShares;
 	float commission, commissionRival, priceShare, value;

 	printf("Enter number of shares: ");
 	scanf("%d", &nShares);

 	printf("Enter price per share: ");
 	scanf("%f", &priceShare);

 	value = nShares * priceShare;

 	if (value<2500.00f) {
 		commission = 30.00f + 0.017f * value; 
 	} 
 	else if (value < 6250.00f) {
 		commission = 56.00f + 0.0066f * value; 
 	}
 	else if (value < 20000.00f) {
 		commission = 76.00f + 0.0034f * value; 
 	}
 	else if (value < 50000.00f) {
 		commission = 100.00f + 0.0022f * value; 
 	}
 	else if (value < 500000.00f) {
 		commission = 155.00f + 0.0011f * value; 
 	}
 	else {
 		commission = 255.00f + 0.0009f * value;
 	}

 	if (nShares<2000)
 	{
 		commissionRival = 33.00f + 0.03f * nShares;
 	} else {
 		commissionRival = 33.00f + 0.02f * nShares;
 	}

 	if (commission < 39.00f)
 	{
 		commission = 39.00f;
 	}

 	printf("Commission: $%.2f\n", commission);
 	printf("commission rival: $%.2f\n", commissionRival);

 	return 0;
 } 