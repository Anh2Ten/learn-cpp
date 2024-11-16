#include <iostream>
using namespace std;

int main() {
  cout << "Nhap so can tinh giai thua: \n";
  int n;
  int ketqua = 1;
  cin >> n;
 
  for(int i = 1; i <= n; i++){
    ketqua *= i;
  }
  cout << "Giai Thua Cua " << n << " la: " << ketqua << endl;
}
