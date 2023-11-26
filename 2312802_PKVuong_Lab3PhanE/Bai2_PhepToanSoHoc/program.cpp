/*================================
1. Nap thu vien
==================================*/
#include<iostream>
#include<conio.h>
using namespace std;
/*=========================================
2. Dinh nghia hang va kieu du lieu moi
===========================================*/


/*=========================================
3. Khai bao nguyen mau ham
===========================================*/
double TinhBieuThuc(double x, double y, char k);


/*=========================================
4. Ham main
===========================================*/
int main() {
	double x, y;
	char k;
	cout << endl << "PHEP TOAN SO HOC";
	do {
		cout << endl << "Nhap x = ";
		cin >> x;
		cout << endl << "Nhap y = ";
		cin >> y;
		if (x == 0 || y == 0) {
			cout << "Khong hop le. Moi nhap lai";
		}
	} while (x == 0 || y == 0);

	cout << "Nhap dau phep toan : ";
	cin >> k;
	cout << "Phep toan: " << x << k << y << " = " << TinhBieuThuc(x, y, k);

	_getch();
	return 1;
}

/*=========================================
5. Dinh nghia ham
===========================================*/

double TinhBieuThuc(double x, double y, char k) {
	double t;
	switch (k)
	{
	case '+':
		t = x + y;
		break;
	case '-':
		t = x - y;
		break;
	case '*':
		t = x * y;
		break;
	case '/':
		t = x / y;
		break;
	default:
		t = 0;
		break;
	}
	return t;
}