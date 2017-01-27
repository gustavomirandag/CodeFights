int isSumOfConsecutive2(int n) {

	int count = 0;

	int limit = n / 2;

	for (int i = 1; i <= limit; i++)
	{
		int total = i + i + 1;
		int increment = i + 2;

		while (total <= n)
		{
			if (total == n)
				count++;

			total += increment;
			increment++;

		}

	}
	return count;
}

int isSumOfConsecutive2(int n) {
	while (!(n & 1)) n >>= 1;
	int ans = 0;
	for (int i = 2; i <= n; ++i)
		ans += !(n % i);
	return ans;
}

int isSumOfConsecutive2(int n) {
	int result = 0;
	for (int start = 1; start < n; start++) {
		int number = n,
			subtrahend = start;
		while (number > 0) {
			number -= subtrahend;
			subtrahend++;
		}
		if (number == 0) {
			result++;
		}
	}
	return result;
}