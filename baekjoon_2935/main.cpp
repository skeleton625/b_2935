#include <iostream>
#include <string.h>
// strlen 함수는 string 헤더엔 없지만 string.h 헤더엔 존재함
using namespace std;
char x, a[101], b[101];

int main() {
	cin >> a >> x >> b;
	if (x == '+') {
		int r = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
		for (int i = 0; i < r; i++) cout << (r - strlen(a) == i) + (r - strlen(b) == i);
	} else {
		cout << 1;
		for (int i = 0; i < strlen(a) + strlen(b) - 2; i++) cout << 0;
	}
	return 0;
}