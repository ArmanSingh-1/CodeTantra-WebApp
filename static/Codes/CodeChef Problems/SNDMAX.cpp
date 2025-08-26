#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int x = 0; x < T; x++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (((a > b) and(b > c)) or((c > b) and(b > a))) {
            cout << b << "\n";
        }
        else if (((b > a) and(a > c)) or((c > a) and(a > b))) {
            cout << a << "\n";
        }
        else if (((a > c) and(c > b)) or((b > c) and(c > a))) {
            cout << c << "\n";
        }
    }

}