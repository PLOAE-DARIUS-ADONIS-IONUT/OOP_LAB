#include "area.h"

using namespace std;

bool isValidFloat(const string& str) {
	int dotCount = 0;
	for (char ch : str) {
		int ascii = ch;
		if (ch == '.') {
			dotCount++;
		}
		if (!(ascii >= 48 && ascii <= 57) && !(ch == '.' && dotCount <= 1)) {
			return false;
		}
	}

	return true;
}

float calcArea(const string& length, const string& width) {
	if (isValidFloat(length) && width.empty()) {
		return stof(length) * stof(length);
	}
	else if (isValidFloat(length) && isValidFloat(width) && !width.empty()) {
		return stof(length) * stof(width);
	}
	else {
		throw invalid_argument("Invalid input");
	}
}