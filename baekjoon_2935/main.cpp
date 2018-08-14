#include <iostream>
#include <string>
using namespace std;

string a, b;
char x;

void func(string a, string b) {
	for (int i = 0; i < a.size() - b.size(); i++) cout << a.at(i);
	for (int i = 0; i < b.size(); i++) cout << b.at(i);
}

int main() {
	cin >> a >> x >> b;
	if (x == '+') {
		if (a.size() == b.size()) for (int i = 0; i < a.size(); i++) cout << (a.at(i) + b.at(i) - 2 * '0');
		else if (a.size() > b.size()) func(a, b);
		else func(b, a);
	}
	else {
		int s = (a.at(0) - '0')*(b.at(0) - '0');
		cout << s;
		for (int i = 0; i < a.size() + b.size() - 2; i++) cout << 0;
	}
	return 0;
}