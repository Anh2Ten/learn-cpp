//Bài 13: Tính S(n) = x^2 + x^4 + … + x^2n
 
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
		luythua += (long long)pow(x, 2 * i);
		
	}
	cout << luythua;

} 
