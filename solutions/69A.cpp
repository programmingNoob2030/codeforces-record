#include <iostream>
using namespace std;
int n;
int main() {
	cin >> n;
	long long x = 0;
	long long y = 0;
	long long z = 0;
	long long dx, dy, dz;
	for (int i = 1; i <= n; i++) {
		cin >> dx >> dy >> dz;
		x += dx;
		y += dy;
		z += dz;
	}
	if (x == 0 && y == 0 && z == 0) cout << "YES" << '\n';
	else cout << "NO" << "\n";

	return 0;
}