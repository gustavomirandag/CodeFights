#include <cmath>

using namespace std;

bool isPower(int n) {
	if (n == 1)
		return true;
	for (int index = 2; index <= sqrt(n); index++)
		for (int power = 2; power <= sqrt(n); power++)
			if (pow(index, power) == n)
				return true;
	return false;
}

//OR

bool isPower(int n) {
	if (n == 1) return true;
	for (int power = 2; ; ++power) {
		int index = lround(pow(n, 1.0 / power));
		if (index < 2) return false;
		if (pow(index, power) == n) return true;
	}
}