#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char pilihan;

    do {
        int jumlahBarang;
        double totalHarga = 0;
        double diskon = 0;
        double totalSetelahDiskon = 0;

        cout << "Masukkan jumlah barang: ";
        cin >> jumlahBarang;

        for (int i = 1; i <= jumlahBarang; i++) {
            double hargaBarang;
            cout << "Masukkan harga barang ke-" << i << ": Rp ";
            cin >> hargaBarang;
            totalHarga += hargaBarang;
        }

        if (totalHarga > 500000) {
            diskon = 0.10 * totalHarga;
        } 
        else if (totalHarga >= 250000) {
            diskon = 0.05 * totalHarga;
        } 
        else {
            diskon = 0;
        }

        totalSetelahDiskon = totalHarga - diskon;

        cout << fixed << setprecision(2);
        cout << "Total Harga: Rp " << totalHarga << endl;
        cout << "Diskon: Rp " << diskon << endl;
        cout << "Total Setelah Diskon: Rp " << totalSetelahDiskon << endl;

        cout << "Ingin menambahkan belanjaan lagi? (Y/n): ";
        cin >> pilihan;

    } while (pilihan == 'Y' || pilihan == 'y');

    cout << "Terimakasih telah menggunakan program ini!" << endl;

    return 0;
}
