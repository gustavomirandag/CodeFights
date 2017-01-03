bool isSmooth(std::vector<int> arr) {
	int middle;

	//Determine if it is Odd or Even
	if (arr.size() % 2)
		middle = arr[arr.size() / 2]; //Odd
	else
		middle = arr[arr.size() / 2] + arr[arr.size() / 2 - 1]; //Even

	if (arr[0] == arr[arr.size() - 1] && arr[0] == middle)
		return true;
	else
		return false;
}
