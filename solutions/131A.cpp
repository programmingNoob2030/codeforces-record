#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string str;
	cin >> str;

	bool is_upper = isupper(str[0]);
	bool changable = true;
	
	for (int i = 1; i < str.size(); i++) {
		if (islower(str[i])) {
			changable = false;
			break;
		}
	}
	
	if (changable) {
		for (int i = 0; i < str.size(); i++) {
			if (i == 0) {
				if (is_upper) cout << char(tolower(str[i]));
				else cout << char(toupper(str[i]));
			}
			else cout << char(tolower(str[i]));
		}
	}
	else cout << str << '\n';

	return 0;
}