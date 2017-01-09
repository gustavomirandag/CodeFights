int appleBoxes(int k) {
	int yellowApples = 0;
	int redApples = 0;
	for (int m = 1; m <= k; m++)
		(m % 2 == 0 ? redApples : yellowApples) += m*m;
	return redApples - yellowApples;
}
