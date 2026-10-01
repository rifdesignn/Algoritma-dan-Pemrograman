#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    string nama;
    int JamKerja, TarifJam;

    cout << "Masukkan Nama: ";
    cin >> nama;

    cout << "Masukkan Jam Kerja: ";
    cin >> JamKerja;

    cout << "Masukkan Tarif per Jam: ";
    cin >> TarifJam;

    int GajiTotal = JamKerja * TarifJam;

    cout << left << setw(8) << "Nama" << setw (15) << "Jam Kerja" << setw(10) << "Tarif" << right << setw(7) << "Gaji" << endl;
    cout << string(43, '-') << endl;
    cout << left << setw(8) << nama << setw (15) << JamKerja << setw(10) << TarifJam << right << setw(7) << GajiTotal << endl;

    return 0;
}