//Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N

#include <iostream>
using namespace std;

int main() { 
	int n;
	cout << "nhap n";
	cin >> n; 

	long long mauso = 1; 
	long long ketqua = 0;
	for (int i = 1; i <= n; i++) {
		mauso *= i;
		ketqua += mauso;
	}
	cout << ketqua;

}
