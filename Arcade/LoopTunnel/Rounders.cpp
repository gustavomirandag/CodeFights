int rounders(int value) {
	int p = 10;
	while (value > p) {
		if ((value % p) / (p / 10) < 5)
			value = (value / p) * p;
		else
			value = (value / p + 1)*p;
		p *= 10;
	}
	return value;
}
