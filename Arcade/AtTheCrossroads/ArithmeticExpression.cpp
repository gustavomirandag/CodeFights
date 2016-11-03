bool arithmeticExpression(int A, int B, int C) {
	if (A + B == C || A - B == C || A*B == C || (A / B == C && A%B == 0))
		return true;
	else
		return false;
}