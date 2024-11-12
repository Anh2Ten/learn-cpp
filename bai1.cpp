//Bài 1: Tính S(n) = 1 + 2 + 3 + … + n 

include <iostream>
using namespace std;

int main() {
int n;
cout << "nhap n";
cin >> n;
int ketqua = 0;
  for(int i = 1; i <= n; i++){
    ketqua += i;
  }
   cout << ketqua;
}
