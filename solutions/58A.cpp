#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	const string target = "hello";
	long long index = 0;

	for (auto s : str) {
		if (s == target[index]) {
			index++;
		}
	}

	if (index == target.size()) cout << "YES" << '\n';
	else cout << "NO" << '\n';
	return 0;
}