/*================================
1. Nap thu vien
==================================*/
#include <iostream>
#include<conio.h>
using namespace std;
/*=========================================
2. Dinh nghia hang va kieu du lieu moi
===========================================*/


/*=========================================
3. Khai bao nguyen mau ham
===========================================*/
void XuatUC(int a, int b);
int TimUCLN(int m, int n);
int TimBCNN(int m, int n);
void KiemTra(int a, int b);


/*=========================================
4. Ham main
===========================================*/

int main() {
    cout << "UOC CHUNG - BOI CHUNG\n";
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    XuatUC(a, b);
    cout << "\nUoc chung lon nhat : " << TimUCLN(a, b);
    cout << "\nBoi chung nho nhat: " << TimBCNN(a, b);

    KiemTra(a, b);

    _getch();
    return 1;
}

/*=========================================
5. Dinh nghia ham
===========================================*/

void XuatUC(int a, int b) {
    int c;
    cout << "Xuat ra man hinh uoc chung: ";
    for (int i = 1; i <= a; i++) {
        if (b % i == 0 && a % i == 0) {
            cout << i << "\t";
            c = i;
        }
    }
}

int TimUCLN(int m, int n) {
    while (m != n) {
        if (m < n) n = n - m;
        else m = m - n;
    }
    return m;
}

int TimBCNN(int m, int n) {
    return m * n / TimUCLN(m, n);
}

void KiemTra(int a, int b) {
    int z = 0;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            z = z + i;
        }
    }
    if (z == b)
        cout << " \nTong uoc cua m = n";
    else
        cout << " \nTong uoc cua m = n khong bang n";
}