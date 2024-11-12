//Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "nhap n";
	cin >> n;
	double ketqua = 0;
	for (int i = 0; i <= n; i++) {
		ketqua += 1.0 / (2 * i + 1);
	}
	cout << ketqua;
}
