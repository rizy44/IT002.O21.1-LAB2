#include <iostream>
#include "Diem.h"
using namespace std;

int main() {
    
    Diem diem1(3,4);
    
    
    cout << "Toa do cua diem la: ";
    diem1.Xuat();
    cout << endl;

    
    cout << "Hoanh do cua diem: " << diem1.GetHoanhDo() << endl;

    
    cout << "Tung do cua diem: " << diem1.GetTungDo() << endl;

    
    diem1.TinhTien(2, -1);
    cout << "Sau khi di chuyen, toa do cua diem la: ";
    diem1.Xuat();
    cout << endl;

    return 0;
}
