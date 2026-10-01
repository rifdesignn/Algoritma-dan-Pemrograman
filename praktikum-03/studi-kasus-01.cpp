#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string nama, posisi;
    int jamKerja, tarifJam, gajiTotal;

    cout << "Masukkan Nama: ";
    getline(cin, nama);

    cout << "Masukkan Posisi (Magang/Junior/Senior/Leader/Kepala): ";
    cin >> posisi;

    cout << "Masukkan Jam Kerja: ";
    cin >> jamKerja;

    if (posisi == "Magang" || posisi == "magang") {
        tarifJam = 15000;
    }
    else if (posisi == "Junior" || posisi == "junior") {
        tarifJam = 25000;
    }
    else if (posisi == "Senior" || posisi == "senior") {
        tarifJam = 40000;
    }
    else if (posisi == "Leader" || posisi == "leader") {
        tarifJam = 60000;
    }
    else if (posisi == "Kepala" || posisi == "kepala") {
        tarifJam = 80000;
    }
    else {
        cout << "Posisi tidak valid!" << endl;
        return 0;
    }

    // Rumus menghitung gaji total
    gajiTotal = jamKerja * tarifJam;

    cout << endl;
    cout << left << setw(20) << "Nama" 
         << setw(15) << "Posisi" 
         << setw(12) << "Jam Kerja" 
         << setw(15) << "Tarif/Jam" 
         << right << setw(15) << "Gaji Total" << endl;
    cout << string(77, '=') << endl;
    
    cout << left << setw(20) << nama 
         << setw(15) << posisi 
         << setw(12) << jamKerja 
         << "Rp " << setw(12) << tarifJam 
         << right << "Rp " << setw(12) << gajiTotal << endl;

    return 0;
}