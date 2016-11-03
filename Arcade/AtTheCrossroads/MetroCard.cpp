std::vector<int> metroCard(int lastNumberOfDays) {
	vector<int> result;
	if (lastNumberOfDays == 31) {
		result.push_back(28);
		result.push_back(30);
		result.push_back(31);
	}
	else
		result.push_back(31);
	return result;
}