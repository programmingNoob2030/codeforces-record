#include <iostream>
#include <string>
#include <cctype>

using namespace std;
bool is_vowel(char letter) {
	if (letter == 'A' || letter == 'a') return true;
	if (letter == 'E' || letter == 'e') return true;
	if (letter == 'I' || letter == 'i') return true;
	if (letter == 'O' || letter == 'o') return true;
	if (letter == 'Y' || letter == 'y') return true;
	if (letter == 'U' || letter == 'u') return true;
	return false;
}
int main() {
	string str;
	cin >> str;
	for (auto s : str) {
		if (is_vowel(s)) continue;
		cout << '.' << char(tolower(s));
	}
	return 0;
}