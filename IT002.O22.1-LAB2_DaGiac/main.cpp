#include<iostream>
#include"DaGiac.h"
using namespace std;
int main()
{
	int t;
	cout << "Nhap so dinh cua da giac: ";
	cin >> t;
	DaGiac dagiac(t);

    dagiac.Nhap();

    dagiac.Xuat();

    int heSoPhongTo;
    cout << "Nhap he so phong to: ";
    cin >> heSoPhongTo;
    dagiac.PhongTo(heSoPhongTo);
    cout << "Da giac sau khi phong to:\n";
    dagiac.Xuat();
   
    int heSoThuNho;
    cout << "Nhap he so thu nho: ";
    cin >> heSoThuNho;
    dagiac.ThuNho(heSoThuNho);
    cout << "Da giac sau khi thu nho:\n";
    dagiac.Xuat();

    int dx, dy;
    cout << "Nhap khoang cach di chuyen theo truc x va y: ";
    cin >> dx >> dy;
    dagiac.TinhTien(dx, dy);
    cout << "Da giac sau khi di chuyen:\n";
    dagiac.Xuat();

    double gocQuay;
    cout << "Nhap goc quay (do): ";
    cin >> gocQuay;
    dagiac.Quay(gocQuay);
    cout << "Da giac sau khi quay:\n";
    dagiac.Xuat();

    return 0;
}
