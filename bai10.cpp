//Bài 10: Tính T(x, n) = x^n

#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "nhap x";
	cin >> x;
	int n;
	cout << "nhap n";
	cin >> n; 

	long long ketqua = 1;

	for (int i = 1; i <= n; i++) {
		ketqua *= x;
	}
	cout << ketqua;

}
