#include <iostream>
#include <cmath>
using namespace std;
void nhap(int &n) {
    cout << "Nhap n: ";
    cin >> n;
}

bool songuyento(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int n;
    nhap(n);
    if (n <= 2) {
        cout << "Khong co so nguyen to nao nho hon " << n << endl;
    } else {
        cout << "Cac so nguyen to nho hon " << n << " la: ";
        for (int i = 2; i < n; i++) {
            if (songuyento(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
