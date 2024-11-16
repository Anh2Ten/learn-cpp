/*
Tìm Các Số Hoàn Hảo Từ 1 đến 1000
số hoàn hảo
là số nguyên dương có tổng các ước của nó là chính nó
*/

#include <iostream>
using namespace std;

int main() {
 
 
for(int a = 1; a <= 1000; a++) {
  int sum = 0;
  

for(int i = 1; i < a; i++) {
  if(a % i == 0){
    //cout << i << endl;
    sum += i;
  }
}

  if(sum == a){
    cout << a << " La so hoan hao ! \n";
  }else{
    //cout << a << " Khong la so hoan hao ! \n";
  }
  
 
 
}

}
