//Tìm số chia hết cho 3 từ 10 đến 50

#include <iostream>
using namespace std;

int main() {
  for(int i = 10; i <= 50; i++) {
          if(i % 3 == 0){
            cout << i << endl;
          }
  }
}
