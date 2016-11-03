bool isInfiniteProcess(int a, int b) {
	if (a == b || ((b - a) % 2 == 0 && b>a))
		return false;
	return true;
}