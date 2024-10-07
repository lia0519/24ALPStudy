#include <iostream>
using namespace std;

int main() {
	string c;
	cin >> c;
	
	for (char a = 'a'; a <= 'z'; a++) {
		int cnt = 0;
		for (auto s : c) {
			if (a == s) {
				cnt++;
			}
		}
		cout << cnt << " ";
	}
	return 0;
}
