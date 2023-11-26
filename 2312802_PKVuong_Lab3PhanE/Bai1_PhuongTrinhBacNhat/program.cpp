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
void GiaiPTBacNhat(double a, double b);


/*=========================================
4. Ham main
===========================================*/
int main() {
	double a, b;
	cout << endl << "GIAI PHUONG TRINH BAC NHAT 1 AN";
	cout << endl << "Nhap he so a = ";
	cin >> a;
	cout << endl << "Nhap he so b = ";
	cin >> b;
	GiaiPTBacNhat(a, b);
	_getch();
	return 1;
}

/*=========================================
5. Dinh nghia ham
===========================================*/

void GiaiPTBacNhat(double a, double b) {
	double x = (-b) / a;
	if (a == 0 && b == 0)
		cout << "Phuong trinh " << a << "x + " << b << "=> Vo so nghiem" << endl;
	else if (a == 0 && b != 0)
		cout << "Phuong trinh " << a << "x + " << b << "=> Vo nghiem" << endl;
	else 
		cout << "Phuong trinh " << a << "x + " << b << "=> Co nghiem x = " << x;
}