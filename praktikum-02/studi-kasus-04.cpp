#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double rupiah, dollar, kurs_konversi;

    cout << "Masukkan jumlah rupiah: ";
    cin >> rupiah;

    cout << "Masukkan kurs konversi (rupiah per 1 dollar): ";
    cin >> kurs_konversi;

    if (kurs_konversi > 0){
        
        dollar = rupiah / kurs_konversi;

        cout << "==================" << endl;
        cout << "Jumlah rupiah: Rp " << fixed << setprecision(0) << rupiah << endl;
        cout << "Jumlah dollar: $ " << fixed << setprecision(2) << dollar << endl;

    } else {

        cout << "=====================================" << endl;
        cout << "Kurs konversi harus lebih besar dari 0." << endl;

    }

    return 0;
}