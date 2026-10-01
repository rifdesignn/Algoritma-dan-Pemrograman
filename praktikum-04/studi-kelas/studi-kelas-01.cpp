#include <iostream> //Library untuk perintah I/O
#include <iomanip> // Library untuk format visual output

using namespace std; // Standard penamaan agar tidak menulis std:: di dalam C++ 

int main(){ // Tempat eksekusi program
    int sum = 0; // Variabel untuk menjadi wadah penampung total hasil penjumlahan

    for (int i = 1; i <= 5; i++) { // Perulangan for yang dimana akan terus berjalan berulang selama nilai i kurang atau sama dengan 5
        sum += i; // Menambahkan nilai variabel i saat ini ke variabel sum
        cout << "i: " << i << ", Sum: " << sum << endl; // Mencetak riwayat perulangan ke layar terminal
    }

    cout << "Total: " << sum << endl; // Mencetak teks "Total" di ikuti dengan nilai akhir dari variabel sum 

    return 0; // Program menandakan bahwa telah selesai tanpa error
}