//Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2
 
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "nhap n";
  cin >> n;
  int ketqua = 0;
  for(int i = 1; i <= n; i++) {
    ketqua += i * i;
  }
  cout << ketqua;
}
