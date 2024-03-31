#include <iostream>
#include <string>
#include "ThiSinh.h"
using namespace std;
int main() {
	int n;
	cout << "Nhap so luong thi sinh: ";
	cin >> n;
	cin.ignore();
	ThiSinh* danhsach = new ThiSinh[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap thi sinh so " << i + 1 << ":" << endl;
		danhsach[i].Nhap();
	}
	//in thi sinh tren 15 diem
	cout << "Thi sinh tren 15 diem: " << endl;
	int soThiSinhTren15 = 0;
	for (int i = 0; i < n; i++) {
		if (danhsach[i].Tong() > 15) {
			danhsach[i].Xuat();
			soThiSinhTren15++;
		}
	}
	if (soThiSinhTren15 == 0)
		cout << "Khong co thi sinh nao co tong diem tren 15 \n";
	//Tim sinh vien cao diem nhat
	int Max = danhsach[0].Tong();
	int thiSinhMax = 0;
	for (int i = 1; i < n; i++) {
		if (danhsach[i].Tong() > Max) {
			Max = danhsach[i].Tong();
			thiSinhMax = i;
		}
	}
	cout << "\nThi sinh co diem cao nhat la: \n";
	danhsach[thiSinhMax].Xuat();
	return 0;
}