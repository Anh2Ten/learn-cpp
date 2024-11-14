 
//Bài 14: Tính S(n) = x + x ^ 3 + x ^ 5 + … + x ^ 2n + 1
 
#include <iostream>
#include <cmath>

using namespace std;

int main() { 
	int x;
	cout << "nhap x";
	cin >> x;
	int n;
	cout << "nhap n";
	cin >> n; 
	long long luythua = 0; 

	for (int i = 1; i <= n; i++) {
		luythua += (long long)pow(x, 2 * i + 1);
		
	}
	cout << luythua;

} 
