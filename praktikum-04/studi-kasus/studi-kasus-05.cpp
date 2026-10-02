#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    char pilihan;

    do {
        double totalMakanan = 0;
        double totalTransportasi = 0;
        double totalHiburan = 0;
        double totalLainnya = 0;
        double totalSeminggu = 0;

        double pengeluaranTerbesar = -1; 
        string kategoriTerbesar = "";

        for (int i = 1; i <= 7; i++) {
            string kategori;
            double jumlah;

            cout << "Masukkan kategori pengeluaran hari ke-" << i << " (Makanan/Transportasi/Hiburan/Lain-lain): ";
            cin >> kategori;
            cout << "Masukkan jumlah pengeluaran: Rp ";
            cin >> jumlah;

            if (kategori == "Makanan" || kategori == "makanan") {
                totalMakanan += jumlah;
            } 
            else if (kategori == "Transportasi" || kategori == "transportasi") {
                totalTransportasi += jumlah;
            } 
            else if (kategori == "Hiburan" || kategori == "hiburan") {
                totalHiburan += jumlah;
            } 
            else {
                totalLainnya += jumlah;
            }

            if (jumlah > pengeluaranTerbesar) {
                pengeluaranTerbesar = jumlah;
                kategoriTerbesar = kategori; 
            }
        }

        totalSeminggu = totalMakanan + totalTransportasi + totalHiburan + totalLainnya;

        cout << fixed << setprecision(2);
        cout << "Total Pengeluaran Makanan: Rp " << totalMakanan << endl;
        cout << "Total Pengeluaran Transportasi: Rp " << totalTransportasi << endl;
        cout << "Total Pengeluaran Hiburan: Rp " << totalHiburan << endl;
        cout << "Total Pengeluaran Lainnya: Rp " << totalLainnya << endl;
        cout << "Total Pengeluaran Selama Seminggu: Rp " << totalSeminggu << endl;
        cout << "Pengeluaran Terbesar: Rp " << pengeluaranTerbesar << " pada kategori " << kategoriTerbesar << endl;

        cout << "Ingin mencatat pengeluaran untuk minggu lain? (Y/n): ";
        cin >> pilihan;

    } while (pilihan == 'Y' || pilihan == 'y');

    cout << "Terimakasih telah menggunakan program ini!" << endl;

    return 0;
}
