/*
Tìm số hoàn hảo
là số nguyên dương có tổng các ước của nó là chính nó
*/

#include <iostream>
using namespace std;

int main() {
int a = 3;
int sum = 0;

for(int i = 1; i < a; i++) {
  if(a % i == 0){
    //cout << i << endl;
    sum += i;
  }
}

  if(sum == a){
    cout << a << "La so hoan hao !";
  }else{
    cout << a << "Khong la so hoan hao !";
  }
 
}
