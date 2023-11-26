/*================================
1. Nap thu vien
==================================*/
#include<iostream>
#include<conio.h>
#include <cmath>
using namespace std;
/*=========================================
2. Dinh nghia hang va kieu du lieu moi
===========================================*/


/*=========================================
3. Khai bao nguyen mau ham
===========================================*/
void Xuat(int so);
unsigned int TimLuyThua(unsigned int b, unsigned int n);
void DoiCoSo(unsigned int n, unsigned int b);


/*=========================================
4. Ham main
===========================================*/
int main() {
	unsigned int n, b;
	cout << "Nhap n: ";
	cin >> n;
	do {
		cout << "Nhap b: ";
		cin >> b;
	} while (b < 2 && b > 16);
	DoiCoSo(n, b);
	_getch();
	return 1;
}

/*=========================================
5. Dinh nghia ham
===========================================*/

void Xuat(int so) {

	switch (so)
	{
	case 10:
		cout << "A";
		break;
	case 11:
		cout << "B";
		break;
	case 12:
		cout << "C";
		break;
	case 13:
		cout << "D";
		break;
	case 14:
		cout << "E";
		break;
	case 15:
		cout << "F";
		break;
	default:
		cout << so;
		break;
	}
	
}

unsigned int TimLuyThua(unsigned int b, unsigned int n) {
	int m = b;
	while (m < n) {
		m = m * b;
	}
	if (m > n) m = m / b;
	return m;
}

void DoiCoSo(unsigned int n, unsigned int b) {
	int v = TimLuyThua(b, n);
	int so;
	while (v > 0) {
		if (n < v) {
			Xuat(0);
		}
		else {
			so = n / v;
			Xuat(so);
			n = n - so * v;
		}
		v = v / b;
	};
}