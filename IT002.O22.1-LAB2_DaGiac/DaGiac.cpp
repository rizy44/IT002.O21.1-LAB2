#define _USE_MATH_DEFINES
#include "DaGiac.h"
#include<iostream>
#include<math.h>
using namespace std;
DaGiac::DaGiac(int soDinh) : n(soDinh) {
    Dinh = new Diem[n]; // Cấp phát động mảng các đỉnh
}
DaGiac::~DaGiac() 
{
    delete[] Dinh;
}
void DaGiac::Nhap()
{
    for (int i = 0; i < n; i++)
    {
        int a, b;
        do {
            cout << "Nhap Hoanh do diem thu " << i + 1 << ": ";
            cin >> a;
            cout << "Nhap Tung do diem thu " << i + 1 << ": ";
            cin >> b;
            if (a >= -1000 && a <= 1000 && b >= -1000 && b <= 1000) {
                Dinh[i].SetHoanhDo(a);
                Dinh[i].SetTungDo(b);
            }
            else {
                cout << "Nhap khong hop le! Vui long nhap lai.\n";
            }
        } while (Dinh[i].GetHoanhDo() == 0 || Dinh[i].GetTungDo() == 0);
    }
}

void DaGiac::Xuat()
{
    cout << "Da giac gom " << n << " dinh:\n";
    for (int i = 0;i < n;i++)
    {
        Dinh[i].Xuat();
    }
    cout << endl;
}
void DaGiac::PhongTo(int n)
{
    for (int i = 0;i < n;i++)
    {
        int HoanhDoMoi = Dinh[i].GetHoanhDo() * n;
        int TungDoMoi = Dinh[i].GetTungDo() * n;
        Dinh[i].SetHoanhDo(HoanhDoMoi);
        Dinh[i].SetTungDo(TungDoMoi);
    }
}

void DaGiac::ThuNho(int n)
{
    for (int i = 0;i < n;i++)
    {
        int HoanhDoMoi = Dinh[i].GetHoanhDo() / n;
        int TungDoMoi = Dinh[i].GetTungDo() / n;
        Dinh[i].SetHoanhDo(HoanhDoMoi);
        Dinh[i].SetTungDo(TungDoMoi);
    }
}
void DaGiac::TinhTien(int dx, int dy)
{
    for (int i = 0;i < n;i++)
    {
        int HoanhDoMoi = Dinh[i].GetHoanhDo() +dx;
        int TungDoMoi = Dinh[i].GetTungDo() + dy;
        Dinh[i].SetHoanhDo(HoanhDoMoi);
        Dinh[i].SetTungDo(TungDoMoi);
    }
}
void DaGiac::Quay(double Goc)
{
    double cosAngle = cos(Goc * M_PI / 180);
    double sinAngle = sin(Goc * M_PI / 180);
    for (int i = 0; i < n; i++)
    {
        double newX = Dinh[i].GetHoanhDo() * cosAngle - Dinh[i].GetTungDo() * sinAngle; //Diem xm=x.cos-x.sin
        double newY = Dinh[i].GetHoanhDo() * sinAngle + Dinh[i].GetTungDo() * cosAngle;//Diem ym=y.sin+y.cos
        Dinh[i].SetHoanhDo(newX);
        Dinh[i].SetTungDo(newY);
    }
}
