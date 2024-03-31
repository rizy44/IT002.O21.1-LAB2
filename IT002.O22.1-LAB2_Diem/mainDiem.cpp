#include <iostream>
#include "Diem.h"
using namespace std;
void Tinhtiendiem(Diem& point)
{
    int a, b;
    cout << "Nhap vao hoanh do, tung do muon di chuyen: ";
    cin >> a >> b;
    point.TinhTien(a, b);
}
int main() 
{
    Diem diem1(3,4);
    Diem diem2;
    cout << "Toa do cua diem 1 la: ";
    diem1.Xuat();
    cout << endl;
    cout << "Nhap diem 2 theo cu phap tung, hoanh: ";
    int Tung, Hoanh;
    cin >> Hoanh >> Tung;
    diem2.SetHoanhDo(Hoanh);
    diem2.SetTungDo(Tung);
    Diem diem3(diem2);
    cout << "Toa do diem 1: ";
    diem1.Xuat();
    cout << endl;
    cout << "Toa do diem 2: ";
    diem2.Xuat();
    cout << endl;
    cout << "Toa do diem 3: ";
    diem3.Xuat();
    cout << endl;
    Tinhtiendiem(diem1);
    Tinhtiendiem(diem2);
    cout << "Sau khi di chuyen, toa do cua diem 1 la: ";
    diem1.Xuat();
    cout << endl;
    cout << "Sau khi di chuyen, toa do cua diem 2 la: ";
    diem2.Xuat();
    cout << endl;
    return 0;
}

