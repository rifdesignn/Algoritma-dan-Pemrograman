#include <iostream>

using namespace std;

int countDigits(int n) {
    int count = 0;

    while (n > 0) {
        count++;
        n /= 10;
    }

    return count;
}

int main(){
    int number = 123450;
    cout << "Jumlah digit: " << countDigits(number) << endl;

    number = 012345;   //  012345 dibaca oktal, karena diawali dengan angka 0 = basis 8, jadi jumlah digitnya adalah 4 digit, padahal seharusnya 5.
    cout << "Jumlah digit: " << countDigits(number) << endl;
    
    return 0;
}