#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b) {
        cout << c / a << "\n";
    } else {
        cout << c / b << "\n";
    }
}