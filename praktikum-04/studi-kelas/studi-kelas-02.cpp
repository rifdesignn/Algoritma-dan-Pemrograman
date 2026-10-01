#include <iostream> //Library untuk perintah I/O
#include <iomanip> // Library untuk format visual output

using namespace std; // Standard penamaan agar tidak menulis std:: di dalam C++ 

int main(){ // Tempat eksekusi program
    int i = 10; // Membuat variabel i dan mengisi nilai awal 10

    for (i = 0; i < 10; i++) { // Perulangan variabel i yang nilainya langsung diatur ulang menjadi 0 dan akan terus berputar selama nilai i kurang dari 10
        cout << "i: " << i << endl; // Mencetak nilai variabel i ke layar terminal
    }

    return 0; // Program menandakan bahwa telah selesai tanpa error
}