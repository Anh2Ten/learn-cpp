//Bài 7: Tính S(n) = ½ + 2 / 3 + ¾ + …. + n / n + 1

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "nhap n";
	cin >> n;
	double ketqua = 0;
	for (int i = 1; i <= n; i++) {
		ketqua += (double)i / (i + 1);
	}
	cout << ketqua;
}
