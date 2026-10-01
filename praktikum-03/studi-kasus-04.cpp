#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int pilihan;
    double rupiah, hasilKonversi = 0.0, kurs = 0.0;
    string mataUang = "", simbol = "";

    cout << "=======================================" << endl;
    cout << "   APLIKASI KONVERSI MATA UANG (IDR)   " << endl;
    cout << "=======================================" << endl;
    cout << "Masukkan jumlah Rupiah (Rp): ";
    cin >> rupiah;

    // Validasi dasar agar input uang tidak minus atau nol
    if (rupiah <= 0) {
        cout << "Jumlah uang harus lebih besar dari 0!" << endl;
        return 0;
    }

    cout << "Pilih Mata Uang Tujuan Konversi:" << endl;
    cout << "1. Dollar AS (USD)" << endl << "2. Euro (EUR)" << endl << "3. Yen Jepang (JPY)" << endl << "4. Rupee India (INR)" << endl;
    cout << "5. Rial Arab Saudi (SAR)" << endl << "6. Won Korea Selatan (KRW)" << endl << "7. Ringgit Malaysia (MYR)" << endl << "8. Baht Thailand (THB)" << endl;
    cout << "=======================================" << endl;
    cout << "Pilih nomor (1-8): ";
    cin >> pilihan;

    // Logika penentuan kurs dan simbol mata uang
    if (pilihan == 1) {
        kurs = 15500.0;     mataUang = "Dollar AS";       simbol = "USD";
    } else if (pilihan == 2) {
        kurs = 16800.0;     mataUang = "Euro";            simbol = "EUR";
    } else if (pilihan == 3) {
        kurs = 105.0;       mataUang = "Yen Jepang";      simbol = "JPY";
    } else if (pilihan == 4) {
        kurs = 185.0;       mataUang = "Rupee India";     simbol = "INR";
    } else if (pilihan == 5) {
        kurs = 4130.0;      mataUang = "Rial Arab Saudi"; simbol = "SAR";
    } else if (pilihan == 6) {
        kurs = 11.5;        mataUang = "Won KorSel";       simbol = "KRW";
    } else if (pilihan == 7) {
        kurs = 3500.0;      mataUang = "Ringgit Malaysia";simbol = "MYR";
    } else if (pilihan == 8) {
        kurs = 450.0;       mataUang = "Baht Thailand";   simbol = "THB";
    } else {
        cout << "=======================================" << endl;
        cout << "Pilihan tidak valid! Program berhenti." << endl;
        return 0;
    }

    hasilKonversi = rupiah / kurs;

    cout << "=======================================" << endl;
    cout << "            HASIL KONVERSI             " << endl;
    cout << "=======================================" << endl;
    cout << left << setw(20) << "Jumlah Asal" << ": Rp " << fixed << setprecision(0) << rupiah << endl;
    cout << left << setw(20) << "Mata Uang Tujuan" << ": " << mataUang << endl;
    cout << left << setw(20) << "Kurs Acuan" << ": Rp " << fixed << setprecision(2) << kurs << endl;
    cout << "---------------------------------------" << endl;
    cout << left << setw(20) << "Hasil Konversi" << ": " << simbol << fixed << setprecision(2) << hasilKonversi << endl;
    cout << "=======================================" << endl;

    return 0;
}
