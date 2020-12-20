#include "InputOutput.h"
void transFile(FILE* f1, FILE* f2) {
	int ch;
	while (1) {
		ch = fgetc(f2);
		if (!feof(f2)) {
			fputc(ch, f1);
		}
		else break;
	}
}
int linkContent(char *l1, char* l2) {
	FILE* f1 = fopen(l1, "at");
	FILE* f2 = fopen(l2, "r");
	if (f1 == NULL || f2 == NULL) {
		cout << "File not found!\n";
		return 0;
	}
	else {
		cout << "Success!\n";
		transFile(f1, f2);
		fclose(f1);
		fclose(f2);
		return 0;
	}
}