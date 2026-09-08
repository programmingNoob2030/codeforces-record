#include <iostream>
#include <string>
using namespace std;

int main() {
	int t, n;
	string str;
	cin >> t;
	
	// 左右括号总是一样的
	// 右括号是关键
	// 正常情况下左括号出现，不一定是不符合题意的，比较难判断
	// 而右括号出现，只需要判断其前面是否有空余的左括号可以匹配
	while (t--) {
		cin >> n;
		cin >> str;
		int lf = 0;
		int moves = 0;
		for (auto c : str) {
			if (c == '(') lf++;
			if (c == ')') {
				if (lf - 1 >= 0) lf--;
				else moves++;
			}
		}
		cout << moves << '\n';
	}
	return 0;
}