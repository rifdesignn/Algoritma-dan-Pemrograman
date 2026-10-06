#include <iostream>

using namespace std;

void recursion() {
    cout << "Halo." << endl;

    recursion(); // recursion(n - 1); Jika ingin menentukan hasil sesuai input n
}

int main() {
    recursion(); // gunakan recursion(3), konteks ini akan menghasilkan output halo sebanyak 3

    return 0;
}