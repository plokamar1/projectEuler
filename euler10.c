#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ALL 1999998

bool prime(long long n);

int main(int argc, char *argv[])
{
	static long nums[ALL];
	long long totalSum = 0;
	bool pr[ALL];
	long sum = 0;
	int i = 0, j = 0;

	for (i = 0; i < ALL; i++) {
		nums[i] = i + 2;
		pr[i] = true;
	}

	for (i = 0; i < ALL; i++) {
		if (pr[i] == true) {
			totalSum += nums[i];
			j = i;
			do {
				sum = 0;
				sum = nums[i] * (j + 2);
				if (sum < ALL + 2) {
					pr[sum - 2] = false;
				}
				j++;
			} while (sum < ALL + 2 && j < ALL);
		}
	}
	printf("%lli\n", totalSum);

}
