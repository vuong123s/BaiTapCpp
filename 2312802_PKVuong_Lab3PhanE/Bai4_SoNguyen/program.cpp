/*================================
1. Nap thu vien
==================================*/
#include<iostream>
#include<conio.h>
#include<string>


using namespace std;
/*=========================================
2. Dinh nghia hang va kieu du lieu moi
===========================================*/


/*=========================================
3. Khai bao nguyen mau ham
===========================================*/
void Xuat(int n);
int SoChiaHet3Ko4(int n);
int SoChuSo(int n);
void DaoNguoc(int n);
int TongChuSo(int n);
int ChuSoDauTien(int n);
long long DoiNhiPhan(int n);
bool SoHoanHao(int n);
void XuatSoHC(int n);
int TimM(int n);

/*=========================================
4. Ham main
===========================================*/
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Xuat(n);
	cout << "So chia het cho 3 va khong chia het cho 4: " << SoChiaHet3Ko4(n) << endl;
	cout << "So chu so cua " << n << ": " << SoChuSo(n) << endl;
	cout << "Tong cac chu so cua n : " << TongChuSo(n) << endl;
	cout << "Chu so dau tien: " << ChuSoDauTien(n) << endl;
	cout << "Nhi phan cua N: " << DoiNhiPhan(n) << endl;
	
	DaoNguoc(n);
	cout << "N co phai so hoan hao ko: " << SoHoanHao(n) << endl;
	XuatSoHC(n);
	cout << "So nguyen m lon nhat cho tong 1 + ...+ m <= n : " << TimM(n);
	_getch();
	return 1;
}

/*=========================================
5. Dinh nghia ham
===========================================*/

void Xuat(int n) {
	cout << "Xuat 1 -> n \n";
	for (int i = 1; i <= n; i++) {
		if (i % 10 == 0) cout << i << "\n";
		else cout << i << "\t";
	}
	cout << endl;
}

int SoChiaHet3Ko4(int n){
	int m = 0;
	for (int i = 1; i <= n; i++) {
		if ((i % 3 == 0) && (i % 4 != 0)) m++;
	}
	return m;
}

int SoChuSo(int n) {
	int dem = 0;
	while (n >= 1) {
		n = n / 10;
		dem++;
	}
	return dem;
}
////////////////////////////
void DaoNguoc(int n) {
	cout << "So dao nguoc N : ";
	int t = 0;
	while (n >= 1) {
		t = n % 10;
		n = n / 10;
		
		cout << t;
	}
	cout << endl;
	
	return ;
}

int TongChuSo(int n) {
	int x = 0;
	while (n >= 1) {
		x = x + n % 10;
		n = n / 10;
	}
	return x;
}

int ChuSoDauTien(int n) {
	int x = 0;
	while (n >= 1) {
		x = n % 10;
		n = n / 10;
	}
	return x;
}

//////////////////////////////////
long long DoiNhiPhan(int n) {
	long long x = 0;
	int p = 0;
	while (n > 0)
	{
		x += (n % 2) * pow(10, p);
		++p;
		n /= 2;
	}
	return x;
}

bool SoHoanHao(int n) {
	int x = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) x = x + i;
	}
	if (x / 2 == n) return true;
	return false;
}

void XuatSoHC(int n) {
	cout << "Cac so hoan chinh trong [1...n]: ";
	for (int i = 1; i <= n; i++) {
		if (SoHoanHao(i) == 1) cout << i << " ";
	}
	cout << endl;
}

int TimM (int n) {
	int x = 0;
	int m = 0;
	while (x <= n) {
		m = m + 1;
		x = x + m;
	}
	return m - 1;
}