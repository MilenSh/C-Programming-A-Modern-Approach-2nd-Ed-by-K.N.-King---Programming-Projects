#include <stdio.h>

int main(int argc, char const *argv[])
{
	int pref, group, publish, itemN, check;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &pref, &group, &publish, &itemN, &check);
	printf("GSI: %d\nGroup ID: %d\nPub code: %d\nItem number: %d\nCheck digit: %d\n", pref, group, publish, itemN, check);

	return 0;
}