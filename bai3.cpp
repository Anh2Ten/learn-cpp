//Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n
#include <iostream>
using namespace std;
int main (){
int n;
cout << "nhap n";
cin >> n;
double ketqua = 0;
  for(int i = 1; i <= n; i++) {
    ketqua += 1.0 / i;
  }
  cout << ketqua;
}
