#include <iostream>
#include <vector>

using namespace std;
int main() {
	long long n, m, next_pos;
	cin >> n >> m;
	long long current_pos = 1;
	long long time = 0;
	for (int i = 1; i <= m; i++) {
		cin >> next_pos;
		// 新位置 只有三种可能
		// 1. 在cp的左边, 2. 在cp的右边, 3. 等于cp
		if (next_pos == current_pos) {
			continue;
		}
		else if (next_pos > current_pos) {
			time += next_pos - current_pos;
		}
		else {
			time += (n - current_pos) + next_pos;
		}
		current_pos = next_pos;
	}
	cout << time << '\n';

	return 0;
}