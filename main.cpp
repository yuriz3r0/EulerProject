// Summation of primes
// Problem 10
// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.

#include <iostream>
#include <math.h>
#include "primer.h"

int main() {
	long limit = 2000000;
	long long sum = 0;
	for (long int i = 2; i <= limit; i++) {
		if (isPrime(i)) {
			sum += i;
		}
	}
	std::cout << "suma = " << sum << std::endl;

	system("PAUSE");
}