//Khai bao thu vien

#include <iostream>
using namespace std;


//Khai bao nguyen mau

double TimMax(double x, double y);
double TimMax4(double a, double b, double c, double d);

//Ham main

int main() {
	double a, b, c, d;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	cout << "Nhap d: ";
	cin >> d;
	
	cout << "So lon nhat trong 4 so: " << TimMax4(a, b, c, d);
	

	return 0;
}

//Dinh nghia ham

double TimMax(double x, double y) {
	return x < y ? y : x;
}
double TimMax4(double a, double b, double c, double d) {
	return TimMax(TimMax(a, b), TimMax(c, d));
}