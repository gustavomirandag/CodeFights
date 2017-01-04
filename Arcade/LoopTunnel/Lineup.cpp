//Better Version
int lineUp(std::string commands) {
	bool isLineUp = true;
	int countLineUp = 0;
	for (cmd : commands) {
		if (cmd != 'A')
			isLineUp = !isLineUp;
		if (isLineUp)
			countLineUp++;
	}
	return countLineUp;
}


//Naive Version
char executeCmd(char guy, bool isRightGuy, char command) {
	if (!isRightGuy) {
		if (command == 'L')
			command = 'R';
		else if (command == 'R')
			command = 'L';
	}

	if (command == 'L') {
		switch (guy) {
		case 'F':
			return 'L'; //Left
		case 'L':
			return 'B'; //Back
		case 'B':
			return 'R'; //Right
		case 'R':
			return 'F'; //Front
		}
	}
	else if (command == 'R') { //Right
		switch (guy) {
		case 'F':
			return 'R'; //Right
		case 'R':
			return 'B'; //Back
		case 'B':
			return 'L'; //Right
		case 'L':
			return 'F'; //Front
		}
	}
	else { //Around
		switch (guy) {
		case 'F':
			return 'B'; //Right
		case 'R':
			return 'L'; //Back
		case 'B':
			return 'F'; //Right
		case 'L':
			return 'R'; //Front
		}
	}
	return 'F';
}

int lineUp(std::string commands) {
	char rightGuy = 'F'; //Front
	char wrongGuy = 'F'; //Front
	int countEqualPos = 0;

	for (int i = 0; i<commands.size(); i++) {
		rightGuy = executeCmd(rightGuy, true, commands[i]);
		wrongGuy = executeCmd(wrongGuy, false, commands[i]);
		cout << "rightGuy = " << rightGuy << endl;
		cout << "wrongGuy = " << wrongGuy << endl;
		if (rightGuy == wrongGuy)
			countEqualPos++;
	}
	return countEqualPos;
}
