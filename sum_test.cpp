#include "sum_test.h"

int sum(int n) {
	// assured that n*(n+1) is even
	// so that it's divisible by 2
	return n*(n+1)/2;
	/*
	int ret = 0;
	for(int i = 1; i <= n; i++) {
		ret += i;
	}
	return ret;
	*/
}
