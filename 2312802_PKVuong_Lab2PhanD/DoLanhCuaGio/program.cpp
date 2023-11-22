//Khai bao thu vien

#include <iostream>
#include <math.h>
using namespace std;


//Khai bao nguyen mau

double DoLanh(double t, double v);

//Ham main

int main() {
	double t, v, w;
	do {
		cout << "Nhiet do: ";
		cin >> t;
		
	} while ((t > 50) || (t < -50));
	do {
		cout << "Van toc gio: ";
		cin >> v;
	} while ((v > 120) || (v < 3));
	w = DoLanh(t, v);
	cout << "Do lanh cua gio" << w;
	return 0;
}

//Dinh nghia ham

double DoLanh(double t, double v) {
	return  35.74 + 0.6215 * t + (0.4275 * t - 35.75) * v * 0.16;
}