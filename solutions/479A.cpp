#include <iostream>

using namespace std;


int main() {
	// 数据量小, 不需要DP
	long long a, b, c;
	cin >> a >> b >> c;
	long long max_v = a * b * c;

	long long candidate = (a + b) * c;
	if (candidate > max_v) max_v = candidate;
	
	candidate = a * (b + c);
	if (candidate > max_v) max_v = candidate;

	candidate = a * b + c;
	if (candidate > max_v) max_v = candidate;

	candidate = a + b * c;
	if (candidate > max_v) max_v = candidate;

	candidate = a + b + c;
	if (candidate > max_v) max_v = candidate;
	
	cout << max_v << '\n';
	

	return 0;
}