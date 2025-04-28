#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n == 1 || n == 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
void printFibonacci(int n) {
    if (n > 30) {
        cout << "Vui long nhap n <= 30" << endl;
        return;
    }

    cout << "Day Fibonacci tu f1 den f" << n << ":" << endl;
    for (int i = 1; i <= n; ++i) {
        cout << "f" << i << " = " << fibonacci(i) << endl;
    }
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    printFibonacci(n);
    return 0;
}
