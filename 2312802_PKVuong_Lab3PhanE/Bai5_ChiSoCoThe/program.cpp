/*================================
1. Nap thu vien
==================================*/
#include<iostream>
#include<conio.h>
#include <cmath>

using namespace std;
/*=========================================
2. Dinh nghia hang va kieu du lieu moi
===========================================*/
double TinhChiSoBMI(double khoiLuong, double chieuCao);
void PhanLoaiBMI(double bmi);


/*=========================================
3. Khai bao nguyen mau ham
===========================================*/


/*=========================================
4. Ham main
===========================================*/
int main()
{
    double w, h, bmi;
    do {
        cout << "Nhap khoi luong (kg) w = ";
        cin >> w;
        cout << "Nhap chieu cao (m) h = ";
        cin >> h;
        if (w <= 0 || h <= 0) {
            cout << "Khong hop le" << endl;
        }
    } while (w <= 0 || h <= 0);

    bmi = TinhChiSoBMI(w, h);
    PhanLoaiBMI(bmi);

    _getch();
    return 1;
}

/*=========================================
5. Dinh nghia ham
===========================================*/
double TinhChiSoBMI(double khoiLuong, double chieuCao) {
    double bmi = khoiLuong / (chieuCao * chieuCao);
    return bmi;
}

void PhanLoaiBMI(double bmi) {
    if (bmi < 15) {
        cout << "Doi khat" << endl;
        cout << "Ban nen an nhieu hon.";
    }
    else if (bmi >= 15 && bmi < 17.5) {
        cout << "Bieng an" << endl;
        cout << "Ban nen an nhieu hon.";
    }
    else if (bmi >= 17.5 && bmi < 18.5) {
        cout << "Thieu can" << endl;
        cout << "Ban nen an nhieu hon.";
    }
    else if (bmi >= 18.5 && bmi < 25) {
        cout << "Ly tuong" << endl;
    }
    else if (bmi >= 25 && bmi < 30) {
        cout << "Thua can" << endl;
        cout << "Ban nen tap the duc nhieu hon.";
    }
    else if (bmi >= 30 && bmi < 40) {
        cout << "Beo phi" << endl;
        cout << "Ban nen tap the duc nhieu hon va dieu chinh che do an.";
    }
    else {
        cout << "Tre em bi beo phi" << endl;
        cout << "Ban nen tap the duc nhieu hon va dieu chinh che do an.";
    }
}