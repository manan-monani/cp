#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;
    cin >> n;
    for (int i = 2; i <= n; ++i)
        fact *= i;
    cout << "Factorial: " << fact << endl;
    return 0;
}
