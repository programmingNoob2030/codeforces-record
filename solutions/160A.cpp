#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> coins(105);
	long long sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> coins[i];
		sum += coins[i];
	}
	sort(coins.begin() + 1, coins.begin() + 1 + n);
	long long my_coin = 0;
	long long number = 0;
	while (my_coin * 2 <= sum && n - number >= 1) {
		my_coin += coins[n - number];
		number++;
	}
	cout << number << '\n';
	return 0;
}