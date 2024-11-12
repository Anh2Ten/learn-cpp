//Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n
#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "nhap n";
  cin >> n;
  double ketqua = 0;
  for(int i = 1; i <= n; i++) {
    ketqua += 1.0 / (2 * i);
  }
  cout << ketqua;
}
