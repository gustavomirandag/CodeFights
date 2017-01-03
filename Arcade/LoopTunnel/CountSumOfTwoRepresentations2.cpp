int countSumOfTwoRepresentations2(int n, int l, int r) {
	int count = 0;
	for (int a = l; a <= r; a++) {
		int b = n - a;
		if (b >= l && b <= r && b >= a)
			count++;
	}
	return count;
}

//O(1)
int countSumOfTwoRepresentations2(int n, int l, int r) {
	if (2 * l > n) return 0;
	if (2 * r < n) return 0;
	l = std::max(l, n - r);
	return n / 2 - l + 1;
}
