#include "Functions.h"

double factorial(double n) {
	if (n>1) {
		return n*factorial(n - 1);
	}
	else if (n==0 || n==1) {
		return 1;
	}
	return 1;
}
