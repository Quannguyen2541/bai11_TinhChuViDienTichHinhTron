// bai11_TinhChuViDienTichHinhTron.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << " Chuong trinh tinh chu vi dien tich hinh tron\n";;
	double bankinh, PI, chuvi, dientich;
	cout << "Nhap a (bankinh):\n";
	cin >> bankinh;
	cout << "PI= 3.14\n"; 
	PI = 3.14;
	
	chuvi = 2 * PI * bankinh;
	dientich = (PI * (bankinh * bankinh));

	cout << "chu vi hinh tron la:\n" << chuvi << endl;
	cout << "dien tich hinh tron la:\n" << dientich << endl;
	return 0;

}
