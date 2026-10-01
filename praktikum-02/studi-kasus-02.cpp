#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    double HargaBarang, Diskon, HargaDiskon, FinalHarga;

    cout << "Masukkan Harga Belanja: " << endl;
    cin >> HargaBarang;

    cout << "Masukkan Diskon: " << endl;
    cin >> Diskon;

    HargaDiskon = (Diskon / 100) * HargaBarang; 
    FinalHarga = HargaBarang - HargaDiskon;
    cout << "Harga Belanja adalah: " << fixed << setprecision(2) << FinalHarga << endl;

    return 0;
}