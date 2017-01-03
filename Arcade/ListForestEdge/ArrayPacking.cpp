int arrayPacking(std::vector<int> a) {
	int result = 0;
	for (int i = a.size() - 1; i >= 0; i--)
		result = (result << 8) | a[i];
	return result;
}