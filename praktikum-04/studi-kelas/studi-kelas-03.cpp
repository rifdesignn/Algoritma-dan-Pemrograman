#include <iostream> //Library untuk perintah I/O
#include <iomanip> // Library untuk format visual output

using namespace std; // Standard penamaan agar tidak menulis std:: di dalam C++ 

int main(){ // Tempat eksekusi program
    int n = 5; //Membuat variabel n sebagai target batas perulangan dan mengisinya

    for (int i = 0; i != n; i += 2) { //Perulangan variabel kontrol i dimulai dari angka 0. Perulangan diatur untuk berjalan selama nilai i melompat ditambah 2. Hasilnya infinite
    cout << "i: " << i << endl; // Mencetak nilai variabel i pada terminal
    }

    return 0; // Program menandakan bahwa telah selesai tanpa error
}