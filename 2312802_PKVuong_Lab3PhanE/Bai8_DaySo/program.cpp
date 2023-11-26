/*================================
1. Nap thu vien
==================================*/
#include <iostream>
#include <math.h>
#include<conio.h>
using namespace std;

/*=========================================
2. Dinh nghia hang va kieu du lieu moi
===========================================*/

/*=========================================
3. Khai bao nguyen mau ham
===========================================*/
void Dungfor(int n);

void DungWhile(int n);

void DungDoWhile(int n);

/*=========================================
4. Ham main
===========================================*/

int main() {
    

    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Dung For:------" << endl;
    Dungfor(n);
    cout << "Dung While:------" << endl;
    DungWhile(n);
    cout << "Dung Do While:------" << endl;
    DungDoWhile(n);

    _getch();
    return 1;
}

/*=========================================
5. Dinh nghia ham
===========================================*/

void Dungfor(int n) {
    double h = 0;
    double s = 0;
    double u = 0;
    double t = 0;
    double f = 0;
    for (double i = 1; i <= n; i++) {
        h = h + (1 / i);

        s = s + ((i + 1) / (i * i));
        t = t + ((pow(-1, i) * i) / (i + 1));
        u = u + 1 / (i * (i + 1));
        int o = 1;
        for (int j = 1; j <= i; j++) {
            o = o * j;
        }
        f = f + o;
    }
    cout << "Hn = " << h << endl;
    cout << "Sn = " << s << endl;
    cout << "Tn = " << t << endl;
    cout << "Un = " << u << endl;
    cout << "Fn = " << f << endl;
}

void DungWhile(int n) {
    double h = 0;
    double s = 0;
    double u = 0;
    double t = 0;
    double f = 0;
    double i = 1;
    while (i <= n) {
        h = h + (1 / i);

        s = s + ((i + 1) / (i * i));
        t = t + ((pow(-1, i) * i) / (i + 1));
        u = u + 1 / (i * (i + 1));
        int o = 1;
        for (int j = 1; j <= i; j++) {
            o = o * j;
        }
        f = f + o;
        i++;
    }
    cout << "Hn = " << h << endl;
    cout << "Sn = " << s << endl;
    cout << "Tn = " << t << endl;
    cout << "Un = " << u << endl;
    cout << "Fn = " << f << endl;
}

void DungDoWhile(int n) {
    double h = 0;
    double s = 0;
    double u = 0;
    double t = 0;
    double f = 0;
    double i = 1;
    do {
        h = h + (1 / i);

        s = s + ((i + 1) / (i * i));
        t = t + ((pow(-1, i) * i) / (i + 1));
        u = u + 1 / (i * (i + 1));
        int o = 1;
        for (int j = 1; j <= i; j++) {
            o = o * j;
        }
        f = f + o;
        i++;
    } while (i <= n);
    cout << "Hn = " << h << endl;
    cout << "Sn = " << s << endl;
    cout << "Tn = " << t << endl;
    cout << "Un = " << u << endl;
    cout << "Fn = " << f << endl;
}