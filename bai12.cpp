//Bài 12: Tính S(n) = x + x ^ 2 + x ^ 3 + … + x ^ n

#include <iostream>
using namespace std;

int main() { 
	int x;
	cout << "nhap x";
	cin >> x;
	int n;
	cout << "nhap n";
	cin >> n;
	long long luythua = 1;
	long long ketqua = 0;
	for (int i = 1; i <= n; i++) {
		luythua *= x;
		ketqua += luythua;
	}
	cout << ketqua;

}
