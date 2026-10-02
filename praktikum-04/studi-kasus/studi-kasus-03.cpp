#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double kwh;
    char pilihan;

    do {
        double tagihanSebelumDiskon = 0;
        double diskon = 0;
        double tagihanSetelahDiskon = 0;
 
        cout << "Masukkan penggunaan listrik (kWh): ";
        cin >> kwh;

        if (kwh <= 100) {
            tagihanSebelumDiskon = kwh * 1500;
        } 
        else if (kwh <= 300) {
            tagihanSebelumDiskon = kwh * 2000;
        } 
        else {
            tagihanSebelumDiskon = kwh * 3000;
        }

        if (tagihanSebelumDiskon > 1000000) {
            diskon = 0.10 * tagihanSebelumDiskon;
        }

        tagihanSetelahDiskon = tagihanSebelumDiskon - diskon;

        cout << fixed << setprecision(2);
        cout << "Total Penggunaan Listrik: " << kwh << " kWh" << endl;
        cout << "Total Tagihan Sebelum Diskon: Rp " << tagihanSebelumDiskon << endl;
        cout << "Diskon: Rp " << diskon << endl;
        cout << "Total Tagihan Setelah Diskon: Rp " << tagihanSetelahDiskon << endl;

        cout << "Ingin menghitung tagihan untuk penggunaan lain? (Y/n): ";
        cin >> pilihan;

    } while (pilihan == 'Y' || pilihan == 'y');

    cout << "Terimakasih telah menggunakan program ini!" << endl;

    return 0;
}
