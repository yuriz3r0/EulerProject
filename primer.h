#pragma once
bool isPrime(long n) {
	if (n < 2) return false;
	if (n == 2) return true;
	if (n == 3) return true;
	if (n % 2 == 0) return false;
	if (n % 3 == 0) return false;
	long max = (long)(sqrt(n + 0.0)) + 1;
	for (int i = 5; i <= max; i += 2) {
		if (n % i == 0) return false;
	}
	return true;
}