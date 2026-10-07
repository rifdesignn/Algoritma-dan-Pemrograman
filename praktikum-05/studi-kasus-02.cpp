#include <iostream>

using namespace std;

void recursion() { // <-- perubahan menjadi void recursion(int n)
    // if (n <= 0) return; <--base case

    cout << "Halo." << endl;

    recursion(); // recursion(n - 1); Jika ingin menentukan hasil sesuai input n
}

int main() {
    recursion(); // gunakan recursion(3), konteks ini akan menghasilkan output halo sebanyak 3

    return 0;
}