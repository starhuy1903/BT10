#include "InputOutput.h"
void inputArray(int a[][Max], int &m, int &n) {
	FILE* h = fopen("matrix.txt", "r");
	if (h == NULL)
		cout << "Loi mo file!\n";
	else {
		cout<< "Thanh cong!\n";
		fscanf(h, "%d %d", &m, &n);
		if (m < 1 || n < 1) {
			cout << "Error!" << endl;
			exit(0);
		}
		int i, j;
		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				fscanf(h, "%d ", &a[i][j]);
			}
		}
	}
	fclose(h);
}

void output(int r) {
	FILE* f2 = fopen("result.txt", "w");
	if (f2 == NULL)
		cout << "Loi mo file!\n";
	else {
		cout << "Thanh cong!\n";
		if (r == 0) {
			fprintf(f2, "There is no\n");
		}
		else fprintf(f2, "%d\n", r);
	}
	fclose(f2);
}
