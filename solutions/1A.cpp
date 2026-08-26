#include <iostream>

using namespace std;

int main() {
	long long n, m, a;
	cin >> n >> m >> a;
	// 数据太大, 没办法使用容器进行存储
	// 考虑 长、宽方向分别需要多少个正方形
	
	// 以长方向为基准
	long long col = n % a == 0 ? n / a : n / a + 1;

	// 以宽方向为基准
	long long row = m % a == 0 ? m / a : m / a + 1;
	
	cout << row * col << '\n';

	
	return 0;
}