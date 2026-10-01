#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double jarak = 0.0, totalLiter = 0.0, harga = 0.0, totalBiaya = 0.0, rasioEfisiensi = 0.0;
    string statusEfisiensi = "";

    cout << "=======================================" << endl;
    cout << "    KALKULATOR BIAYA & EFISIENSI BBM   " << endl;
    cout << "=======================================" << endl;

    cout << "Jarak Tempuh (km)                : ";
    cin >> jarak;
    
    cout << "Total Bensin yang Habis (liter)  : ";
    cin >> totalLiter;
    
    cout << "Harga Bahan Bakar (Rp/liter)     : ";
    cin >> harga;

    if (jarak < 0 || totalLiter <= 0 || harga < 0) {
        cout << "=======================================" << endl;
        cout << "Input tidak valid! Angka tidak boleh nol atau negatif." << endl;
        return 0;
    }

    totalBiaya = totalLiter * harga;

    rasioEfisiensi = jarak / totalLiter;

    if (rasioEfisiensi > 15.0) {
        statusEfisiensi = "Efisien (Irit)";

    } else if (rasioEfisiensi >= 10.0) {
        statusEfisiensi = "Cukup Efisien";

    } else {
        statusEfisiensi = "Boros";
    }

    cout << "=======================================" << endl;
    cout << "            RINGKASAN BIAYA            " << endl;
    cout << "=======================================" << endl;
    cout << fixed << setprecision(2);
    cout << left << setw(23) << "Rasio Konsumsi BBM"    << ": " << rasioEfisiensi << " km/l" << endl;
    cout << left << setw(23) << "Total Biaya Perjalanan" << ": Rp " << totalBiaya << endl;
    cout << left << setw(23) << "Status Efisiensi BBM"   << ": " << statusEfisiensi << endl;
    cout << "=======================================" << endl;

    return 0;
}
