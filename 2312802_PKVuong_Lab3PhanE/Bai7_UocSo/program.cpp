/*================================
1. Nap thu vien
==================================*/

#include <iostream>
#include<conio.h>
#include <math.h>
using namespace std;

/*=========================================
2. Dinh nghia hang va kieu du lieu moi
===========================================*/

#define EPSILON pow(10,-15)

/*=========================================
3. Khai bao nguyen mau ham
===========================================*/

void UocSo(int n, int& dem, int& tong);
double Can2(int number);
int SoLonNhat(int n);

/*=========================================
4. Ham main
===========================================*/

int main() {
    int n;
    int dem = 0;
    cout << "Nhap n: ";
    cin >> n;
    int tong = 0;
    UocSo(n, dem, tong);

    cout << "So cac uoc: " << dem << endl;
    cout << "Tong uoc:" << tong << endl;
    cout << "Can cua " << n << " : " << Can2(n) << endl;

    cout << "So lon nhat <= n ma la luy thua cua 2 : " << SoLonNhat(n);

    _getch();
    return 1;
}

/*=========================================
5. Dinh nghia ham
===========================================*/

void UocSo(int n, int& dem, int& tong) {
    cout << "Cac uoc so cua n: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            dem++;
            tong += i;
        }
    }
    cout << endl;
}

double Can2(int number) {
    double result = 1.0f;
    while (fabs(result * result - number) / number >= EPSILON)
        result = (number / result - result) / 2 + result;
    return result;
}

int SoLonNhat(int n) {
    int x = 1;
    while (x <= n) {
        x *= 2;
    }
    return x / 2;
}