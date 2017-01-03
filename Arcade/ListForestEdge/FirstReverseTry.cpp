std::vector<int> firstReverseTry(std::vector<int> arr) {
	if (arr.size()>1) {
		int aux = arr.back();
		arr[arr.size() - 1] = arr[0];
		arr[0] = aux;
	}
	return arr;
}