#include <iostream>

using namespace std;

void calculateSquare(int &number) {
    number *= number;
}

int main() {
    int num = 5;
    // int originalNum = num;  tambahkan ini untuk menyimpan nilai awal num

    calculateSquare(num);

    cout << "Kuadrat dari " << num << " adalah " << num << endl;
    // cout << "Kuadrat dari " << originalNum << " adalah " << num << endl;  Output yang benar

    return 0;

}