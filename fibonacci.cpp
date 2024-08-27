#include <iostream>
using namespace std;
void printFibonacci(int n) {
    if (n <= 0) return;
    long long a = 0, b = 1;
    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    int n;
    cin >> n;
    printFibonacci(n);
}