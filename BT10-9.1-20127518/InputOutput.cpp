#include "InputOutput.h"
void input(int &m, int &n) {
	FILE* f = fopen("input.txt", "r");
	if (f == NULL)
		cout << "Loi mo file!\n";
	else {
		cout << "Thanh cong!\n";
		fscanf(f, "%d %d", &m, &n);
		if (m < 0 || n < 0) {
			cout << "Error" << endl;
			exit(0);
		}
		if (m > n) {
			int temp = m;
			m = n;
			n = temp;
		}
	}
	fclose(f);
}

void output(int s[], int c) {
	FILE* f2 = fopen("output.txt", "w");
	if (f2 == NULL)
		cout << "Loi mo file!\n";
	else {
		cout << "Thanh cong!\n";
		for (int i = 0; i < c; i++) {
			fprintf(f2, "%d ", s[i]);
		}
		cout << endl;
	}
	fclose(f2);
}