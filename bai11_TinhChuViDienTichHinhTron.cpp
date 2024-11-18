// bai11_TinhChuViDienTichHinhTron.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
int main() {
	cout << " Chuong trinh tinh chu vi dien tich hinh tron\n";;
	double bankinh, chuvi, dientich;
	cout << "Nhap a (bankinh):\n";
	cin >> bankinh;
	// su dung hang so M_PI de khai bao thay vi PI=3.14
	chuvi = 2 * M_PI  bankinh;
	dientich = (M_PI* (bankinh * bankinh));

	cout << "chu vi hinh tron la:\n" << chuvi << endl;
	cout << "dien tich hinh tron la:\n" << dientich << endl;
	return 0;

}
