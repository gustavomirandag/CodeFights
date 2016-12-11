int killKthBit(int n, int k) {
	return  n &= ~(1u << k - 1);
}
