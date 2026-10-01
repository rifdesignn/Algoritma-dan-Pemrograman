#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double meter;

    cout << endl;
    cout << "============================================================" << endl;
    cout << left << setw(10) << "Meter" << setw(15) << "Sentimeter" << setw(15) << "Milimeter" << setw(15) << "Kilometer" << endl;
    cout << "============================================================" << endl;
    cout << fixed << setprecision(3);
    for (int i = 1; i <= 10; ++i) {
        cout << left << setw(10) << i 
            << setw(15) << (i * 100) 
            << setw(15) << (i * 1000) 
            << setw(15) << (i / 1000.0) << endl;
            }

    return 0;
}