int candles(int candlesNumber, int makeNew) {
	int result = 0;
	int leftovers = 0;
	while (candlesNumber > 0) {
		result += candlesNumber;
		leftovers += candlesNumber;
		candlesNumber = leftovers / makeNew;
		leftovers %= makeNew;
	}
	return result;
}
