#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

int main(){
    string namaBarang, barangLower;
    double hargaBarang = 0.0, diskon = 0.0, hargaDiskon = 0.0, finalHarga = 0.0;

    cout << "Masukkan nama barang kos (Contoh: Kasur, Kipas Angin, Rice Cooker, Sapu): ";
    getline(cin, namaBarang);
    
    barangLower = namaBarang;
    transform(barangLower.begin(), barangLower.end(), barangLower.begin(), ::tolower);

    if (barangLower == "kasur") {
        hargaBarang = 500000.0;

    } else if (barangLower == "kipas angin") {
        hargaBarang = 150000.0;
        
    } else if (barangLower == "rice cooker") {
        hargaBarang = 250000.0;

    } else if (barangLower == "sapu") {
        hargaBarang = 25000.0;

    } else if (barangLower == "bantal") {
        hargaBarang = 45000.0;

    } else {
        cout << "Maaf, barang '" << namaBarang << "' tidak terdaftar di sistem kami!" << endl;

        return 0;
    }

    cout << "Barang ditemukan! Harga Asli " << namaBarang << ": Rp " << fixed << setprecision(2) << hargaBarang << endl;

    cout << "Masukkan Persentase Diskon (%): ";
    cin >> diskon;

    hargaDiskon = (diskon / 100.0) * hargaBarang; 
    finalHarga = hargaBarang - hargaDiskon;

    cout << "=======================================" << endl;
    cout << "Detail Pembayaran Barang Kos" << endl;
    cout << "=======================================" << endl;
    cout << "Nama Barang          : " << namaBarang << endl;
    cout << "Harga Awal           : Rp " << fixed << setprecision(2) << hargaBarang << endl;
    cout << "Diskon               : " << setprecision(0) << diskon << "% (Hemat Rp " << fixed << setprecision(2) << hargaDiskon << ")" << endl;
    cout << "Harga Setelah Diskon : Rp " << fixed << setprecision(2) << finalHarga << endl;
    cout << "=======================================" << endl;

    return 0;
}