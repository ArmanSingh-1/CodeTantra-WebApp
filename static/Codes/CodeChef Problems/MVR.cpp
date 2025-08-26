#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int m = (a * 2) + b;
    int r = (c * 2) + d;

    if (m > r) {
        cout << "Messi" << "\n";
    }
    else if (m == r) {
        cout << "Equal" << "\n";
    }
    else if (m < r) {
        cout << "Ronaldo" << "\n";
    }
    return 0;
}