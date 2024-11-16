//Tính Tổng Số Chẵn Từ 0 Đến a
#include <iostream>
using namespace std;

int main() {
    int a;
    int result = 0;
    
    cout << "Tính Tổng Số Chẵn Từ 0 Đến a \n";
    cout << "Nhap A: \n";
    cin >> a;
    
    if (a % 2 == 0) {
        for (int i = 0; i <= a; i += 2) {
            result += i;
        }
        cout << result;
    }else{
        cout << a << " La so le, toi khong tinh duoc";
    }
}
