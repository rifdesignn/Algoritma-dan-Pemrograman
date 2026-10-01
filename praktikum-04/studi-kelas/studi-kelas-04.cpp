#include <iostream> //Library untuk perintah I/O
#include <iomanip> // Library untuk format visual output

using namespace std; // Standard penamaan agar tidak menulis std:: di dalam C++ 

int main(){ // Tempat eksekusi program
    for (int i = 1; i <= 5; i++) { //Perulangan luar dengan variabel i dimulai dari 1 sampai 5. Mengatur jumlah baris

        for (int j = 1; j <= i; j++) { //Perluangan dalam dengan variabel j dimulai dari 1 hingga nilai j tidak melibihi nilai i. Mengatur jumlah bintang dicetak ke samping
            cout << "* "; // Mencetak simbol bintang di ikuti satu spasi
        }
    cout << endl; // Perintah berpindah ke baris baru setelah perulangan bintang ke samping selesai
    }

    return 0; // Program menandakan bahwa telah selesai tanpa error
}