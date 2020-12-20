#include "InputOutput.h"

char convertEncode(char c, int k) {
	int a = (int)c;
	if (a >= 65 && a <= 90) {
		a += k;
		while(a > 90) {
			a -= 25;
		}
	}
	else if (a >= 97 && a <= 122) {
		a += k;
		while (a > 122) {
			a -= 25;
		}
	}
	return (char)a;
}
char convertDecode(char c, int k) {
	int a = (int)c;
	if (a >= 65 && a <= 90) {
		a -= k;
		while (a < 65) {
			a += 25;
		}
	}
	else if (a >= 97 && a <= 122) {
		a -= k;
		while (a < 97) {
			a += 25;
		}
	}
	return (char)a;
}
int outputCode(FILE* f1, char* l2) {
	FILE* f2 = fopen(l2, "w");
	if (f2 == NULL) {
		cout << "File not found!\n";
		return 0;
	}
	else {
		int ch, code;
		int choise = inputChoise();
		int k = inputKey();
		if (choise == 1) {
			while (1) {
				ch = fgetc(f1);
				if (!feof(f1)) {
					code = convertEncode(ch, k);
					fputc(code, f2);
				}
				else break;
			}
			cout << "Success!\n";
		}
		else {
			while (1) {
				ch = fgetc(f1);
				if (!feof(f1)) {
					code = convertDecode(ch, k);
					fputc(code, f2);
				}
				else break;
			}
			cout << "Success!\n";
		}
		fclose(f2);
	}
}


int process(char* l1, char* l2) {
	FILE* f1 = fopen(l1, "r");
	if (f1 == NULL) {
		cout << "File not found!\n";
		return 0;
	}
	else {
		cout << "Opened\n";
		outputCode(f1, l2);
	}
	fclose(f1);
	return 0;
}