#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool coprime(int a, int b);

int main(int argc, char *argv[])
{
	int a = 1, b = 2, sum = 0;
  double c = 0;
	for (a = 1; a < 500; a++) {
		for (b = 0; b < 500; b++) {
			if (a < b) {
				c = pow(a, 2) + pow(b, 2);
				c = sqrt(c);
				sum = a + b + c;
				if (sum == 1000 && fmod(c,1)==0) {
					long mul = a * b * c;
					printf("%d %d %f %li\n",a,b,c, mul);
          exit (0);
				}
			}
		}
	}
}
