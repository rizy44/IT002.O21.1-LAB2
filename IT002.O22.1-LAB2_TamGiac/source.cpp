#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include"TamGiac.h"
using namespace std;
int main() {
    TamGiac tg;
    tg.Nhap();
    tg.Xuat();
    tg.TinhTien(3, 3);
    tg.Xuat();
    tg.PhongTo(3);
    tg.Xuat();
    tg.ThuNho(3);
    tg.Xuat();
    tg.Quay(30);
    tg.Xuat();
    return 0;
}