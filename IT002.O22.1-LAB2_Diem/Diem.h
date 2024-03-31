#pragma once
class Diem
{
protected:
	int iHoanh;
	int iTung;
public:
	Diem();
	Diem(int Hoanh, int Tung = 1);
	Diem(const Diem & x);
	void Xuat();
	int GetTungDo();
	int GetHoanhDo();
	void SetTungDo(int Tung);
	void SetHoanhDo(int Hoanh);
	void TinhTien(int dx,int dy);
};

