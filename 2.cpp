#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0, b = 1, c;
    cout << "Fibonacci: ";
    for (int i = 0; i < n; ++i) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}
