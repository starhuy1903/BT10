#include "InputOutput.h"
#include "Process.h"
int main() {
	int a[Max][Max];
	int m, n;
	inputArray(a, m, n);
	int r = compute(a, m, n);
	output(r);
	return 0;
}