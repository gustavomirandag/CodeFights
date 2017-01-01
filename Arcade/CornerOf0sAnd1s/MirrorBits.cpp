int mirrorBits(int a) {
	int r = 0;
	for (; a; a >>= 1)
		r = r << 1 | a & 1;
	return r;
}