int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {
	int result = 0; //Final Weight

	if (value1 > value2) {
		if (weight1 <= maxW) {
			result += value1;
			maxW -= weight1;
		}
		if (weight2 <= maxW)
			result += value2;
	}
	else { // value2 >= value1
		if (weight2 <= maxW) {
			result += value2;
			maxW -= weight2;
		}
		if (weight1 <= maxW)
			result += value1;
	}

	return result;
}