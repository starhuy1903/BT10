#include "InputOutput.h"
#include "Process.h"

int main() {
	int s[Max];
	int m, n, c = 0;
	input(m, n);
	checkPrime(m, n, s, c);
	output(s, c);
	return 0;
}