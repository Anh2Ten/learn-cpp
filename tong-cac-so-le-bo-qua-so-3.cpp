//Tính Tổng Số Lẻ Từ 0 Đến a bỏ qua số 3
#include <iostream>
using namespace std;

int main() {
    int a;
    int result = 0;
    
    cout << "Tính Tổng Số Lẻ Từ 0 Đến a bỏ qua số 3\n";
    cout << "Nhap A: \n";
    cin >> a;
    
    if (a % 2 == 1) {
        for (int i = 1; i <= a; i += 2) {
            if (i == 3) {
                continue;
            }
            result += i;
        }
        cout << result;
    }else{
        cout << a << " La so chan, toi khong tinh duoc";
    }
}
