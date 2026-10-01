#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double panjang = 0.0, lebar = 0.0, tinggi = 0.0;
    double hargaCatPerLiter = 0.0, luasDinding = 0.0, jumlahCatLiter = 0.0, totalBiayaCat = 0.0;
    string kategoriCat = "";

    cout << "=======================================" << endl;
    cout << "     KALKULATOR KEBUTUHAN CAT DINDING  " << endl;
    cout << "=======================================" << endl;

    cout << "Panjang Ruangan (meter)       : "; cin >> panjang;
    cout << "Lebar Ruangan (meter)         : "; cin >> lebar;
    cout << "Tinggi Ruangan (meter)        : "; cin >> tinggi;
    cout << "Harga Cat per Liter (Rp)      : "; cin >> hargaCatPerLiter;

    if (panjang <= 0 || lebar <= 0 || tinggi <= 0 || hargaCatPerLiter <= 0) {
        cout << "=======================================" << endl;
        cout << "Input tidak valid! Angka harus lebih besar dari 0." << endl;
        return 0;
    }

    luasDinding = 2 * (panjang + lebar) * tinggi;
    
    jumlahCatLiter = luasDinding / 10.0; 
    totalBiayaCat = jumlahCatLiter * hargaCatPerLiter;

    if (jumlahCatLiter > 10.0) {
        kategoriCat = "Banyak Cat Dibutuhkan";

    } else if (jumlahCatLiter >= 5.0) {
        kategoriCat = "Sedang";

    } else {
        kategoriCat = "Sedikit";
    }

    cout << "=======================================" << endl;
    cout << "           RINGKASAN ESTIMASI          " << endl;
    cout << "=======================================" << endl;
    cout << fixed << setprecision(2);
    cout << left << setw(23) << "Luas Dinding Total"     << ": " << luasDinding << " meter persegi" << endl;
    cout << left << setw(23) << "Kebutuhan Cat"         << ": " << jumlahCatLiter << " Liter" << endl;
    cout << left << setw(23) << "Kategori Jumlah Cat"   << ": " << kategoriCat << endl;
    cout << "---------------------------------------" << endl;
    cout << left << setw(23) << "Total Biaya Pembelian" << ": Rp " << totalBiayaCat << endl;
    cout << "=======================================" << endl;

    return 0;
}
