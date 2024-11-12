//Bài 9: Tính T(n) = 1 x 2 x 3…x N

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "nhap n";
	cin >> n;
	double ketqua = 1;
	for (int i = 1; i <= n; i++) {
		ketqua *= i;
	}
	cout << ketqua;
}
