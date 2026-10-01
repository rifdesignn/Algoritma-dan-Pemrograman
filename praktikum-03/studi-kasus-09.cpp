#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double meter;
    int pilihan;

    cout << "=======================================" << endl;
    cout << "      APLIKASI KONVERSI SATUAN METER   " << endl;
    cout << "=======================================" << endl;
    
    cout << "Masukkan nilai dalam meter: ";
    cin >> meter;

    if (meter < 0) {
        cout << "=======================================" << endl;
        cout << "Input tidak valid! Nilai meter tidak boleh negatif." << endl;
        return 0;
    }

    cout << "Pilih jenis konversi:" << endl;
    cout << "1. Konversi ke Sentimeter (cm)" << endl;
    cout << "2. Konversi ke Milimeter (mm)" << endl;
    cout << "3. Konversi ke Kilometer (km)" << endl;
    cout << "4. Tampilkan Tabel Konversi Lengkap (1 - 10 meter)" << endl;
    cout << "=======================================" << endl;
    cout << "Masukkan pilihan Anda (1-4): ";
    cin >> pilihan;

    cout << "=======================================" << endl;
    cout << "            HASIL KONVERSI             " << endl;
    cout << "=======================================" << endl;

    switch (pilihan) {
        case 1:
            cout << fixed << setprecision(2);
            cout << meter << " meter = " << (meter * 100.0) << " cm" << endl;
            break;

        case 2:
            cout << fixed << setprecision(2);
            cout << meter << " meter = " << (meter * 1000.0) << " mm" << endl;
            break;

        case 3:
            cout << fixed << setprecision(5);
            cout << meter << " meter = " << (meter / 1000.0) << " km" << endl;
            break;

        case 4:
            cout << left << setw(10) << "Meter" 
                 << setw(15) << "Sentimeter" 
                 << setw(15) << "Milimeter" 
                 << setw(15) << "Kilometer" << endl;
            cout << "======================================================" << endl;
            
            cout << fixed << setprecision(3);
            for (int i = 1; i <= 10; ++i) {
                cout << left << setw(10) << i 
                     << setw(15) << (i * 100.0) 
                     << setw(15) << (i * 1000.0) 
                     << setw(15) << (i / 1000.0) << endl;
            }
            break;
        default:
            cout << "Pilihan tidak valid! Silakan jalankan ulang program." << endl;
    }
    cout << "======================================================" << endl;

    return 0;
}
