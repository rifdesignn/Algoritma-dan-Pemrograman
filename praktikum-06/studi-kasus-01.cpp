#include <iostream>

using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i <= 5; i++) {   // i <= 5 mengakses arr[5] yang diluar batas, sehingga hasil nilai setelah 5 adalah sampah (number random)
            cout << arr[i] << " ";
    }

    return 0;
}