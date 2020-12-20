#include "InputOutput.h"
int sum(int a[][Max], int m, int n) {
	int sum = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			sum += a[i][j];
		}
	}
	return sum;
}
int compute(int a[][Max], int m, int n) {
	int s = sum(a, m, n);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (2 * a[i][j] == s) return a[i][j];
		}
	}
	return 0;
}