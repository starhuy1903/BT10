void checkPrime(int m, int n, int s[], int &c) {
	for (int i = m; i <= n; i++) {
		if (i == 1) continue;
		bool flag = true;
		for (int j = i - 1; j > 1; j--) {
			if (i % j == 0) {
				flag = false;
				break;
			}
		}
		if (flag) s[c++] = i;
	}
}