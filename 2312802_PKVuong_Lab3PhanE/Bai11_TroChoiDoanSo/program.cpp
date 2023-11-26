/*================================
1. Nap thu vien
==================================*/

#include <iostream>
#include<math.h>
#include<conio.h>
using namespace std;

/*=========================================
2. Dinh nghia hang va kieu du lieu moi
===========================================*/

/*=========================================
3. Khai bao nguyen mau ham
===========================================*/
int SinhSo();
void DoanSo(int n, int k);

/*=========================================
4. Ham main
===========================================*/

int main() {
    int n = SinhSo();
    int k;
    cout << "Nhap so lan doan k: ";
    cin >> k;
    cout << n << endl;
    DoanSo(n, k);
    
    _getch();
    return 1;
}

/*=========================================
5. Dinh nghia ham
===========================================*/

int SinhSo() {
    int soDe;
    srand((unsigned int)time(NULL));
    soDe = rand()%100;

    return soDe;
}


void DoanSo(int n, int k) {
    int x;
    cout << "Nhap N: ";
    cin >> x;
    for (int i = 0; i < k; i++) {
        if (x < n) cout << "-> Nho hon so N" << endl;
        else if (x == n) {
            cout << "Chuc mung ban da chien thang";
            break;
        }
        else cout << "-> Lon hon so N" << endl;
        cout << "Nhap N: ";
        cin >> x;
    }
    cout << "Ban da thua";
}