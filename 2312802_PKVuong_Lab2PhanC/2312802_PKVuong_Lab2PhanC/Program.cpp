#include <iostream>
#include <conio.h>
using namespace std;


void ThongBao();
void XuatKyTu(short ma);
void XuatPhuongTrinh(float a, float b);

int main() {
	ThongBao();
	XuatKyTu(157);

	short dollar = 36, ma;
	XuatKyTu(dollar);
	cout << endl << "Nhap 1 so trong doan [ 30 ... 255 ] : ";
	cin >> ma;
	XuatKyTu(ma);

	XuatPhuongTrinh(2.3, 5);

	float p, q = 10;
	XuatPhuongTrinh(7.5, q);

	cout << endl << "Nhap mot so thuc : ";
	cin >> p;

	XuatPhuongTrinh(p, q);

	_getch();
	return 1;
}

void ThongBao() {
	cout << endl << "Ban phai hoan thanh bai tap nay.";
}

void XuatKyTu(short ma) {
	char kyTu = (char)ma;
	cout << endl << ma << " <=> " << kyTu;
}

/*
Bước 15: Nhận xét hàm XuatKyTu
+ số 157, biến dollar, ma gọi chung là đối số
+ tên của tham số hình thức được khia báo khi định nghĩa hàm XuatKyTu là ma
+ đối số và tham số hình thức không nhất thiết phải trùng tên
+ đối số và tham số hình thức phải nhất thiết cùng kiểu dữ liệu
+ không thể viết lời gọi hàm XuatKyTu(dollar, ma). Vì hàm XuatKyTu chi có duy nhất một tham số hình thức
*/

void XuatPhuongTrinh(float a, float b) {
	cout << endl << a << " * x + " << b << " = 0";
}

/*
Bước 20: Nhận xét hàm XuatPhuongTrinh
+ số 2.5,5,10,7.5, biến p, q gọi chung là đối số
+ tên của tham số hình thức được khai báo khi định nghĩa hàm XuatKyTu là a, b
+ đối số và tham số hình thức không nhất thiết phải trùng tên
+ đối số và tham số hình thức phải nhất thiết cùng kiểu dữ liệu
+ không thể viết lời gọi hàm XuatPhuongTrinh(p, q, r). Vì hàm XuatPhuongTrinh chi có 2 tham số hình thức là p, q
*/