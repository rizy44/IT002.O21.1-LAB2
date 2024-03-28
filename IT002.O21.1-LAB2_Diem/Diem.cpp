#include "Diem.h"
#include <iostream>
#include <cmath>
using namespace std;

Diem::Diem() {
    iHoanh = 0;
    iTung = 0;
}

//Giới hạn của 1 điểm có giá trị tung và hoành thuộc [-1000,1000]
Diem::Diem(int Hoanh, int Tung) {
    if (Hoanh >= -1000 && Hoanh <= 1000)
        iHoanh = Hoanh;
    else
        iHoanh = 0;

    if (Tung >= -1000 && Tung <= 1000)
        iTung = Tung;
    else
        iTung = 0;
}
Diem::Diem(const Diem& x) {
    iHoanh = x.iHoanh;
    iTung = x.iTung;
}
void Diem::Xuat() {
    cout << "(" << iHoanh << "," << iTung << ")";
}
int Diem::GetHoanhDo() {
    return iHoanh;
}

int Diem::GetTungDo() {
    return iTung;
}
void Diem::SetHoanhDo(int Hoanh) {
    if (Hoanh >= -1000 && Hoanh <= 1000) {
        iHoanh = Hoanh;
    }
    else 
    {
        iHoanh = 0;
       
    }
        
}
void Diem::SetTungDo(int Tung) {
    if (Tung >= -1000 && Tung <= 1000)
        iTung = Tung;
    else
    {
        iTung = 0;
        
    }
        
}
void Diem::TinhTien(int dx, int dy) {
    iTung += dy;
    iHoanh += dx;
}
