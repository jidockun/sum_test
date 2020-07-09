#include "sum_test.h"

int sum(int n) {
	int ret = 0;
	for(int i = 1; i <= n; i++) {
		ret += i;
	}
	return ret;
}
