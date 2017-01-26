int countBlackCells(int n, int m) {
	int result = 0;
	for (int row = 1; row <= n; row++) {
		int L = (int)(m * 1L * (row - 1) / n);
		if (m * 1L * (row - 1) % n == 0) {
			L--;
		}
		int R = (int)(m * 1L * row / n);
		L = max(0, L);
		R = min(R, m - 1);
		result += R - L + 1;
	}
	return result;
}

//OR

int gcd(int a, int b)
{
	int c;
	while (a != 0) {
		c = a; a = b%a;  b = c;
	}
	return b;
}

int countBlackCells2(int n, int m) {
	int correction = gcd(m, n);
	if (correction != 1) correction = correction - 2 * (correction - 1);
	return m + n - correction;
}