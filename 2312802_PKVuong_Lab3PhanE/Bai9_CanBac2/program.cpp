/*================================
1. Nap thu vien
==================================*/

#include <iostream>
#include <stdlib.h>
#include<conio.h>
using namespace std;

/*=========================================
2. Dinh nghia hang va kieu du lieu moi
===========================================*/

#define EPSILON 0.0000000000001

/*=========================================
3. Khai bao nguyen mau ham
===========================================*/

double Can(double n);

/*=========================================
4. Ham main
===========================================*/

int main() {
    cout << "Nhap n: ";
    int n;
    cin >> n;
    cout << "Can cua n: " << Can(n);
    _getch();
    return 1;
}

/*=========================================
5. Dinh nghia ham
===========================================*/

double Can(double n) {

    double x = n / 2;
    while (1) {
        x = (x + n / x) / 2;
        if (n / x == x || abs(x - n / x) <= x * EPSILON) break;
    }
    return x;
}