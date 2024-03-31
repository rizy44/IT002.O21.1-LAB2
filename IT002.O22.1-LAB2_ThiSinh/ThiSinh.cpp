#include "ThiSinh.h"
#include <iostream>
using namespace std;
void ThiSinh::Nhap() {
	getline(cin, Ten);
	getline(cin, mssv);
	cin >> iNgay >> iThang >> iNam;
	cin >> fToan >> fVan >> fAnh;
	cin.ignore();
}
void ThiSinh::Xuat() {
	cout << "Ten: " << Ten << endl;
	cout << "MSSV: " << mssv << endl;
	cout << "Ngay thang nam sinh: " << iNgay << " " << iThang << " " << iNam << endl;
	cout << "Diem Toan, Van, Anh lan luot la: " << fToan << ", " << fVan << "," << fAnh << endl;
}
float ThiSinh::Tong() {
	return fToan + fVan + fAnh;
}
