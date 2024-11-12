//Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "nhap n";
	cin >> n;
	double ketqua = 0;
	for (int i = 1; i <= n; i++) {
		ketqua += 1.0 / (i * (i + 1));
	}
	cout << ketqua;
}
