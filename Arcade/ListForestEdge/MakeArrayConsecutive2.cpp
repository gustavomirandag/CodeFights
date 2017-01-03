int makeArrayConsecutive2(std::vector<int> sequence) {
	std::sort(sequence.begin(), sequence.end());
	int add = 0;
	for (int i = 1; i<sequence.size(); i++)
		add += sequence[i] - sequence[i - 1] - 1;
	return add;
}
