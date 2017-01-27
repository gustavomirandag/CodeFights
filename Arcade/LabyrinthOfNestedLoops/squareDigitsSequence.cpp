int squareDigitsSequence(int a0)
{
	std::set<int> s;
	s.insert(a0);
	for (int n = 2; ; ++n)
	{
		int y = a0;
		for (a0 = 0; y; y /= 10)
			a0 += (y % 10) * (y % 10);
		if (s.count(a0))
			return n;
		s.insert(a0);
	}
}


//OR C# Code

int squareDigitsSequence(int a0) {
	int cur = a0;
	List<int> was = new List<int>();

	while (!was.Contains(cur)) {
		was.Add(cur);
		int next = 0;
		while (cur > 0) {
			next += (cur % 10) * (cur % 10);
			cur /= 10;
		}
		cur = next;
	}

	return was.Count + 1;
}