//Khai bao thu vien
#include <iostream>
using namespace std;
#define PI 3.14

//Khai bao nguyen mau
float TheTich(float R, float h);
float DienTichXungQuanh(float R, float h);
float DienTichToanPhan(float R, float h);

//Ham main
int main() {
	float R, h, theTich, dienTichXQ, dienTichTP;
	cout << "Nhap R: ";
	cin >> R;
	cout << "Nhap h: ";
	cin >> h;
	theTich = TheTich(R, h);
	dienTichXQ = DienTichXungQuanh(R, h);
	dienTichTP = DienTichToanPhan(R, h);
	cout << "The tich = " << theTich << endl;
	cout << "Dien tich xung quanh = " << dienTichXQ << endl;
	cout << "Dien tich toan phan = " << dienTichTP << endl;
	return 0;
}

//Dinh nghia ham

/*Tinh the tich hinh tru tron
Input: R, h --> float
Output: theTich = 4 * PI * R * R * h --> float
*/

float TheTich(float R, float h) {
	return (4 * PI * R * R * h);
}

/*Tinh Dien Tich Xung Quanh hinh tru tron
Input: R, h --> float
Output: dienTichXQ = 2 * PI * R * h --> float
*/

float DienTichXungQuanh(float R, float h) {
	return (2 * PI * R * h);
}

/*Tinh Dien Tich Toan Phan hinh tru tron
Input: R, h --> float
Output: dienTichTP = (2 * PI * R * h) + (2 * PI * R * R) --> float
*/

float DienTichToanPhan(float R, float h) {
	return ((2 * PI * R * h) + (2 * PI * R * R));
}