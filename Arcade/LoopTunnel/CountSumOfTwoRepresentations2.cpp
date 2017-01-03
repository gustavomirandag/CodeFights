int countSumOfTwoRepresentations2(int n, int l, int r) {
	int count = 0;
	for (int a = l; a <= r; a++) {
		int b = n - a;
		if (b >= l && b <= r && b >= a)
			count++;
	}
	return count;
}
