#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    int arr[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    set<int> uniqueValues;
    for (int i = 0; i < n; ++i) {
        uniqueValues.insert(arr[i]);
    }

    cout << "So luong gia tri phan biet: " << uniqueValues.size() << endl;
    return 0;
}
