#include <iostream> //Library untuk perintah I/O
#include <iomanip> // Library untuk format visual output

using namespace std; // Standard penamaan agar tidak menulis std:: di dalam C++ 

int main(){ // Tempat eksekusi program
    int num; // Mendeklarasikan variabel num
    num = 12; // Mengisi variabel num dengan nilai angka bulat 12

    cout << "Faktor-faktor dari " << num << " adalah: "; // Mencetak teks kalimat
    for (int i = 1; i <= num; ++i) { // Memulai perulangan dengan pembagi i dimulai dari angka 1 hingga batas angka itu sendiri

        if (num % i == 0) { // Jika kondisi benar maka akan mencetak angka nilai i 
            cout << i << " "; // Di ikuti karakter spasi ke layar terminal
        }
    }

    return 0; // Program menandakan bahwa telah selesai tanpa error
} 