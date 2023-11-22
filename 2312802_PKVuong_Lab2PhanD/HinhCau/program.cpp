//Khai bao thu vien
#include <iostream>
using namespace std;
#define PI 3.1415926

//Khai bao nguyen mau
float TheTich(float R);
float DienTich(float R);

//Ham main
int main() {
	float R, theTich, dienTich;
	cout << "Nhap R: ";
	cin >> R;
	theTich = TheTich(R);
	dienTich = DienTich(R);
	cout << "The tich = " << theTich << endl;
	cout << "Dien tich = " << dienTich << endl;
	return 0;
}

//Dinh nghia ham

/*Tinh the tich hinh cau
Input: R --> float
Output: theTich = (PI * R * R * R) * 4 / 3 --> float
*/

float TheTich(float R) {
	return ((PI * R * R * R) * 4 / 3);
}

/*Tinh the tich hinh cau
Input: R --> float
Output: dienTich = 4 * PI * R * R --> float
*/

float DienTich(float R) {
	return (4 * PI * R * R);
}