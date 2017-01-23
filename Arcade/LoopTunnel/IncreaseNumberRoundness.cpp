bool increaseNumberRoundness(int n) {
	bool isRoundness = false;
	bool isZeroInMiddle = false;

	string nStr = to_string(n);
	for (char s : nStr) {
		if (isZeroInMiddle && s != '0')
			isRoundness = true;
		if (s == '0')
			isZeroInMiddle = true;
	}
	return isRoundness;
}