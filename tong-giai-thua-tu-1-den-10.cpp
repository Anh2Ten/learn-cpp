//Tìm tổng giai thừa từ 1 đến 10

#include <iostream>
using namespace std;

int main() {
int giaithua = 1;
int sum = 0;
  for(int i = 1; i <= 10; i++) {
      giaithua *= i;
      sum += giaithua;
  }
  cout << sum << endl;
}
