#include "TamGiac.h"
#include<iostream>
#define _USE_MATH_DEFINES
#include<cmath>
using namespace std;
void TamGiac::Nhap() {
    cin >> xA >> yA;
    cin >> xB >> yB;
    cin >> xC >> yC;
}
void TamGiac::Xuat() {
    cout << "(" << xA << "," << yA << ")" << endl;
    cout << "(" << xB << "," << yB << ")" << endl;
    cout << "(" << xC << "," << yC << ")" << endl;
}
void TamGiac::TinhTien(int dx, int dy) {
    xA += dx;
    yA += dy;
    xB += dx;
    yB += dy;
    xC += dx;
    yC += dy;
}
void TamGiac::PhongTo(float n) {
    xA *= n;
    yA *= n;
    xB *= n;
    yB *= n;
    xC *= n;
    yC *= n;
}
void TamGiac::ThuNho(float n) {
    xA /= n;
    yA /= n;
    xB /= n;
    yB /= n;
    xC /= n;
    yC /= n;
}
void TamGiac::Quay(float a) {
    float rad = a * 3.1415 / 180;
    float xA_new = xA * cos(rad) - yA * sin(rad);
    float yA_new = xA * sin(rad) + yA * cos(rad);
    float xB_new = xB * cos(rad) - yB * sin(rad);
    float yB_new = xB * sin(rad) + yB * cos(rad);
    float xC_new = xC * cos(rad) - yC * sin(rad);
    float yC_new = xC * sin(rad) + yC * cos(rad);

    xA = xA_new;
    yA = yA_new;
    xB = xB_new;
    yB = yB_new;
    xC = xC_new;
    yC = yC_new;
}