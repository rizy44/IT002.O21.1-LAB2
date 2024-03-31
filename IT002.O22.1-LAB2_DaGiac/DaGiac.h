#pragma once
#include "Diem.h"
class DaGiac :
    public Diem
{
 protected:
        int n;//so diem da giac
        Diem* Dinh = new Diem[n];
public:
    DaGiac(int soDinh);
    ~DaGiac();
    void Nhap();
    void Xuat();
    void TinhTien(int dx,int dy);
    void PhongTo(int a);
    void ThuNho(int a);
    void Quay(double Goc);
};

