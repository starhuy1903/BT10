#include "InputOutput.h"
#include "Process.h"
#define Max 150
int main() {
	char l1[Max]; char l2[Max];
	inputLink(l1, l2);
	process(l1, l2);
	return 0;
}