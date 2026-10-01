#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const int n = 5;
    double nilai[n];
    double total = 0.0;
    string statusVariasi = "";

    cout << "=======================================" << endl;
    cout << "   KALKULATOR RATA-RATA & DEVIASI      " << endl;
    cout << "=======================================" << endl;

    for (int i = 0; i < n; i++){
        cout << "Masukkan Angka ke-" << (i + 1) << " : ";
        cin >> nilai[i];
        total += nilai[i];
    }

    double rataRata = total / n;

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double selisih = nilai[i] - rataRata;
        sum += selisih * selisih;
    }

    double varians = sum / (n - 1);

    double deviasi = sqrt(varians);

    if (deviasi > 2.0){
        statusVariasi = "Variasi Tinggi";
    } else {
        statusVariasi = "Variasi Rendah";
    }

    cout << "=======================================" << endl;
    cout << "             HASIL ANALISIS            " << endl;
    cout << "=======================================" << endl;

    cout << fixed << setprecision(2);
    
    cout << left << setw(23) << "Nilai Rata-Rata"     << ": " << rataRata << endl;
    cout << left << setw(23) << "Standar Deviasi"     << ": " << deviasi << endl;
    cout << left << setw(23) << "Status Kategori"     << ": " << statusVariasi << endl;
    cout << "=======================================" << endl;

    return 0;
}
