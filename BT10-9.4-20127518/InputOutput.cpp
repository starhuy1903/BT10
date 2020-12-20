#include "InputOutput.h"
int inputKey() {
	int k;
	cout << "Enter key: ";
	cin >> k;
	return k;
}
void inputLink(char* l1, char* l2) {
	cout << "Input link file 1: ";
	cin >> l1;
	cout << "Input link file 2: ";
	cin >> l2;
}
int inputChoise() {
	int choise;
	cout << "1. Encode\n";
	cout << "2. Decode\n";
	cout << "Enter choise: ";
	cin >> choise;
	return choise;
}
