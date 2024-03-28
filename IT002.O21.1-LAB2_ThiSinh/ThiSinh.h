#pragma once
#include <string>
using namespace std;
class ThiSinh {
private:
	string Ten, mssv;
	int iNgay, iThang, iNam;
	float fToan, fVan, fAnh;
public:
	void Nhap();
	void Xuat();
	float Tong();
};

