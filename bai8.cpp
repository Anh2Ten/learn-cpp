//Bài 8: Tính S(n) = ½ + ¾ + 5 / 6 + … + 2n + 1 / 2n + 2

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "nhap n";
	cin >> n;
	double ketqua = 0;
	for (int i = 1; i <= n; i++) {
		ketqua += (double)(2 * i + 1) / (2 * i + 2);
	}
	cout << ketqua;
}
