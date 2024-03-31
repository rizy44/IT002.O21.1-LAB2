#pragma once
class TamGiac
{
private:
	float xA, yA, xB, yB, xC, yC;
public:
	void Nhap();
	void Xuat();
	void TinhTien(int dx, int dy);
	void PhongTo(float n);
	void ThuNho(float n);
	void Quay(float a);
};

