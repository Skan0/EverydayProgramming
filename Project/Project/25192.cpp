#include<iostream>
#include<map>

using namespace std;

map<string, bool> m;

int main(void) {
	int n; 
	cin >> n;
	int result = 0;
	string log;
	while (n--) {
		cin >> log;
		if (log == "ENTER") {
			m.clear();
		}
		else {
			if (m[log]) {
				continue;
			}
			else {
				result++;
				m[log] = true;
			}
		}
	}
	cout << result;
}