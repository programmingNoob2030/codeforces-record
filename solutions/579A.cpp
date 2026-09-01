#include <iostream>
#include <map>
#include <vector>
using namespace std;
// 存储 1e9 之内的 2的指数函数值
map<long long, int> index;
vector<long long> arr(35);

int main() {
	long long n;
	cin >> n;
	
	long long times = 1;
	arr[0] = 1;
	index[1] = 1;
	for (int i = 1; i <= 31; i++) {
		times *= 2;
		index[times] = 1;
		arr[i] = times;

	}
	bool is_equal = false;
	long long edge = 0;
	long long cnt = 0;
	for (int i = 1; i <= 31; i++) {
		if (n == arr[i]) {
			is_equal = true;
			cout << 1 << '\n';
			break;
		}
		else if (n < arr[i]) {
			edge = i - 1;
			break;
		}
	}

	for (int i = edge; i >= 0; i--) {
		if (n - arr[i] >= 0) {
			n -= arr[i];
			cnt++;
		}
		if (index[n]) {
			cnt++;
			break;
		}
	}
	if (!is_equal) cout << cnt << '\n';

	return 0;
}