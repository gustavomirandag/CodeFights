int additionWithoutCarrying(int a, int b) {
	int r = 1;
	int result = 0;
	while (a / r || b / r) {
		cout << (a % 10) + (b % 10) << endl;
		result += ((((a / r) % 10) + ((b / r) % 10)) % 10)*r;
		r *= 10;
	}
	return result;
}
