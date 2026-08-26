#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string str;
	cin >> str;
	bool yes = false;
	for (int i = 0; i < str.size(); i++){

		if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9') {
			yes = true;
			break;
		}
	}
	if (yes) cout << "YES" << '\n';
	else cout << "NO" << '\n';

	return 0;
}