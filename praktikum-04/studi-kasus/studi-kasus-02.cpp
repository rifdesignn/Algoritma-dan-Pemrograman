#include <iostream>

using namespace std;

int main() {
    char pilihan;

    do {
        int totalHadir = 0;
        int inputHadir;

        for (int i = 1; i <= 5; i++) {
            cout << "Apakah mahasiswa hadir di hari ke-" << i << "? (1 untuk hadir, 0 untuk tidak hadir): ";
            cin >> inputHadir;
            
            if (inputHadir == 1) {
                totalHadir++;
            }
        }

        int persentase = (totalHadir * 100) / 5;

        string status;
        if (persentase >= 75) {
            status = "Baik";
        } 
        else if (persentase >= 50) {
            status = "Cukup";
        } 
        else {
            status = "Kurang";
        }

        cout << "Persentase Kehadiran: " << persentase << "%" << endl;
        cout << "Status Kehadiran: " << status << endl;

        cout << "Ingin mengecek kehadiran untuk mahasiswa lain? (Y/n): ";
        cin >> pilihan;

    } while (pilihan == 'Y' || pilihan == 'y');

    cout << "Terimakasih telah menggunakan program ini!" << endl;

    return 0;
}
