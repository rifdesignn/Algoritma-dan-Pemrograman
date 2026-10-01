#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    float suhu[5];
    float total_suhu = 0.0;
    float average = 0.0;
    string statusCuaca = "";

    cout << "=======================================" << endl;
    cout << "     PROGRAM PENCATAT SUHU HARIAN      " << endl;
    cout << "=======================================" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Masukkan suhu Hari " << (i + 1) << " (Celcius): ";
        cin >> suhu[i];
        total_suhu += suhu[i];
    }

    average = total_suhu / 5.0;

    if (average > 30.0) {
        statusCuaca = "Cuaca Panas";

    } else if (average >= 20.0) {
        statusCuaca = "Cuaca Normal";
        
    } else { 
        statusCuaca = "Cuaca Dingin";
    }

    cout << "=======================================" << endl;
    cout << "           RINGKASAN LAPORAN           " << endl;
    cout << "=======================================" << endl;
    
    cout << fixed << setprecision(1);
    
    for (int i = 0; i < 5; i++) {
        cout << "Suhu Hari " << (i + 1) << " : " << suhu[i] << " (Celcius)" << endl;
    }
    
    cout << "=======================================" << endl;
    cout << "Rata-rata Suhu : " << average << " (Celcius)" << endl;
    cout << "Kondisi Cuaca  : " << statusCuaca << endl;
    cout << "=======================================" << endl;

    return 0;
}
