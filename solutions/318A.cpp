#include <iostream>
#include <vector>
using namespace std;

int main() {
	// n, k 均超过了 1e9 必须使用 long long 进行存储
	long long n, k, even_start, num;
	cin >> n >> k;
	// n, k <= 1e12 无法使用普通容器进行存储 会爆时间复杂度
	/* 
		如果 n 是偶数
		1,3,5,7,...,n-1, 2,4,6,8,...n
		如果 n 是奇数
		1,3,5,7,...n, 2,4,6,8,...n - 1
		if (n % 2 == 0) {1 -> n / 2 奇数 n / 2 + 1->n 偶数}
		if (n % 2 != 0) {1 -> n / 2 + 1 奇数 n / 2 + 2->n 偶数}
		先算 1 和 2的位置
		1 -> 永远为 1
		2 -> n为奇数 -> n / 2 + 2
		     n为偶数 -> n / 2 + 1

		算目标值的范围 (奇数还是偶数)
		k >= n / 2 + 1 (n为奇数)
		k >= n / 2 + 2 (n为偶数)
	*/
	if (n % 2 == 0){
		even_start = n / 2 + 1;
	}
	else {
		even_start = n / 2 + 2;
	}
	if (k >= even_start) {
		num = 2 + (k - even_start) * 2;
	}
	else {
		num = 1 + (k - 1) * 2;
	}
	cout << num << '\n';
	return 0;
	// Time: O(1) Space: O(1)
}