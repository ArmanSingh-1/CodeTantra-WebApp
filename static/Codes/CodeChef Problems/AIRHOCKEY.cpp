#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int x = 0; x < T; x++) {
        int a, b;
        cin >> a >> b;

        if (a > b) {
            cout << 7 - a << "\n";
        }
        else if (b > a) {
            cout << 7 - b << "\n";
        }
        else if (a == b) {
            cout << 7 - b << "\n";
        }
    }

}