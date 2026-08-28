#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Dragon {
	int strength;
	int bonus;
	bool operator<(const Dragon& d) const {
		// 优先匹配 strength 最少的 bonus 最多的
		if (strength != d.strength) {
			return strength < d.strength;
		}
		else {
			return bonus > d.bonus;
		}
	}
};
vector<Dragon> dragons(1005);
int main() {

	int s, n;
	cin >> s >> n;

	for (int i = 1; i <= n; i++) {
		cin >> dragons[i].strength >> dragons[i].bonus;
	}
	sort(dragons.begin() + 1, dragons.begin() + 1 + n);
	
	long long current = s;
	bool move_able = true;
	for (int i = 1; i <= n; i++) {
		if (current > dragons[i].strength) {
			current += dragons[i].bonus;
		}
		else {
			move_able = false;
			break;
		}
	}
	if (move_able) cout << "YES" << '\n';
	else cout << "NO" << '\n';
	return 0;
}