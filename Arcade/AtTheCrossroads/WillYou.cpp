bool willYou(bool young, bool beautiful, bool loved) {
	if ((young && beautiful && !loved) ||
		((!young || !beautiful) && loved))
		return true;
	return false;
}