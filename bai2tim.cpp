#include <iostream>
using namespace std;

int timMaxChiaHetCho3(int a[], int n) {
    int max = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            if (max == -1 || a[i] > max) {
                max = a[i];
            }
        }
    }
    return max;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int a[n];

    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ketQua = timMaxChiaHetCho3(a, n);
    if (ketQua == -1) {
        cout << "Khong co so nao chia het cho 3 trong mang.\n";
    } else {
        cout << "So lon nhat chia het cho 3 la: " << ketQua << endl;
    }

    return 0;
}
