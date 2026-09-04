#include <iostream>
#include <string>
using namespace std;

int main() {
	long long n;
	string one, two = "", other;
	long long team_one = 0, team_two = 0;
	cin >> n;
	cin >> one;
	n--;
	team_one++;
	while (n--) {
		cin >> other;
		if (other == one) team_one++;
		else {
			if (two == "") two = other;
			team_two++;
		}
	}
	if (team_one > team_two) cout << one << '\n';
	else cout << two << '\n';

	return 0;
}