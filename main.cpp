#include<iostream>
#include<string>

using namespace std;

int main() {
	int n;
	string a;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		(a.length() > 10 ? cout << a.front() << a.length() - 2 << a.back() : cout << a) << "\n";
	}
	return 0;
}
