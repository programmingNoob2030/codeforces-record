#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	bool found = false;
	int l = 0;

	while (l < str.size()){
		int r = l + 1;
		long long len = 1;
		while (r < str.size() && str[r] == str[l]) {
			len++;
			r++;
		}
		if (len >= 7) {
			found = true;
			break;
		}
		l = r;
	}
	if (found) cout << "YES" << '\n';
	else cout << "NO" << '\n';
	return 0;
}