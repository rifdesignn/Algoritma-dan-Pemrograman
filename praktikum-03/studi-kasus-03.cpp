#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int pilihan;
    double volume = 0.0, luas_permukaan = 0.0;
    const double PI = 3.141592653589793;

    cout << "=======================================" << endl;
    cout << "   PROGRAM KALKULATOR BANGUN RUANG     " << endl;
    cout << "=======================================" << endl;
    cout << "1. Balok" << endl << "2. Tabung" << endl << "3. Kubus" << endl << "4. Kerucut" << endl;
    cout << "=======================================" << endl;
    cout << "Pilih bidang (1-4): ";
    cin >> pilihan;
    cout << "=======================================" << endl;

    if (pilihan == 1) {
        // RUMUS BALOK
        double panjang, lebar, tinggi;
        cout << "Masukkan Panjang Balok : "; cin >> panjang;
        cout << "Masukkan Lebar Balok   : "; cin >> lebar;
        cout << "Masukkan Tinggi Balok  : "; cin >> tinggi;

        volume = panjang * lebar * tinggi;
        luas_permukaan = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);

    } else if (pilihan == 2) {
        // RUMUS TABUNG
        double r, tinggi;
        cout << "Masukkan Jari-jari Alas Tabung : "; cin >> r;
        cout << "Masukkan Tinggi Tabung        : "; cin >> tinggi;

        volume = PI * r * r * tinggi;
        luas_permukaan = 2 * PI * r * (r + tinggi);

    } else if (pilihan == 3) {
        // RUMUS KUBUS
        double sisi;
        cout << "Masukkan Panjang Sisi Kubus : "; cin >> sisi;

        volume = sisi * sisi * sisi;
        luas_permukaan = 6 * (sisi * sisi);

    } else if (pilihan == 4) {
        // RUMUS KERUCUT
        double r, tinggi, s;
        cout << "Masukkan Jari-jari Alas Kerucut : "; cin >> r;
        cout << "Masukkan Tinggi Kerucut        : "; cin >> tinggi;

        // Menghitung garis pelukis (s) menggunakan rumus Pythagoras
        s = sqrt((r * r) + (tinggi * tinggi));
        
        volume = (1.0 / 3.0) * PI * r * r * tinggi;
        luas_permukaan = PI * r * (r + s);

    } else {
        cout << "Pilihan tidak valid! Program berhenti." << endl;
        return 0;
    }

    cout << "=======================================" << endl;
    cout << "            HASIL PERHITUNGAN          " << endl;
    cout << "=======================================" << endl;
    cout << fixed << setprecision(2);
    cout << left << setw(20) << "Volume" << ": " << right << setw(15) << volume << endl;
    cout << left << setw(20) << "Luas Permukaan" << ": " << right << setw(15) << luas_permukaan << endl;
    cout << "=======================================" << endl;

    return 0;
}
