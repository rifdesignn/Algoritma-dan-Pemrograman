#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double height = 0.0, weight = 0.0, bmi = 0.0;
    string status = "";

    cout << "=======================================" << endl;
    cout << "     KALKULATOR BMI & STATUS MEDIS     " << endl;
    cout << "=======================================" << endl;

    cout << "Masukkan Berat Badan (kg) : ";
    cin >> weight;
    cout << "Masukkan Tinggi Badan (cm) : ";
    cin >> height;

    if (weight <= 0 || height <= 0) {
        cout << "=======================================" << endl;
        cout << "Input tidak valid! Nilai harus lebih besar dari 0." << endl;
        return 0;
    }

    double heightMeter = height / 100.0;
    bmi = weight / (heightMeter * heightMeter);

    if (bmi < 18.5) {
        status = "Berat Badan Kurang (Underweight)";
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        status = "Berat Badan Normal (Ideal)";
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        status = "Berat Badan Berlebih (Overweight)";
    } else { // Jika BMI di atas 30
        status = "Obesitas";
    }

    cout << "=======================================" << endl;
    cout << "             HASIL ANALISIS            " << endl;
    cout << "=======================================" << endl;
    cout << fixed << setprecision(2);
    cout << left << setw(18) << "Skor BMI Anda" << ": " << bmi << endl;
    cout << left << setw(18) << "Kategori Status" << ": " << status << endl;
    cout << "=======================================" << endl;

    return 0;
}
