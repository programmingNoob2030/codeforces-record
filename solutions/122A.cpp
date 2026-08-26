#include <iostream>
#include <vector>
using namespace std;

vector<bool> vis(1005);
int main() {
	for (int i = 1; i <= 1000; i++) {
		long long num = i;
		bool is_found = true;
		while (num) {
			if (vis[num]) break;
			long long last = num % 10;
			if (last != 4 && last != 7) {
				is_found = false;
				break;
			}
			num /= 10;
		}
		if (is_found) {
			long long basis = i;
			vis[basis] = true;
			while (i + basis <= 1000) {
				basis += i;
				vis[basis] = true;
			}
		}
	}

	long long n;
	cin >> n;
	if (vis[n]) cout << "YES" << '\n';
	else cout << "NO" << '\n';
	return 0;
}