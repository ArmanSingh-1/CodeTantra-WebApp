#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin >> a;

    if (a % 3 == 0) {
        cout << a << "\n";
    }
    else if (a % 3 == 1) {
        cout << a - 1 << "\n";
    }
    else if (a % 3 == 2) {
        cout << a + 1 << "\n";
    }
}