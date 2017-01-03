int leastFactorial(int n) {
	int lastValue = 1;
	int i = 1;
	for (; i*lastValue <n; i++)
		lastValue *= i;
	return i*lastValue;
}
