int rangeBitCount(int a, int b) {
	int count = 0;
	for (int i = a; i <= b;i++) {
		int n = i;
		n = n - ((n >> 1) & 0x55555555);
		n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
		count += (((n + (n >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
	}
	return count;
}
