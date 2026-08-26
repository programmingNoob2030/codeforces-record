#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> nums(105);
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> nums[i];
	}
	
	sort(nums.begin() + 1, nums.begin() + 1 + n);

	for (int i = 1; i <= n; i++) {
		cout << nums[i] << ' ';
	}
	return 0;

}