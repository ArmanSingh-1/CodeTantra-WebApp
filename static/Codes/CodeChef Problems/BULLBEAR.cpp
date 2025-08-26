#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int x = 0; x < T; x++) {
        int a, b;
        cin >> a >> b;
        if (b > a) {
            cout << "PROFIT" << "\n";
        }
        else if (a > b) {
            cout << "LOSS" << "\n";
        }
        else {
            cout << "NEUTRAL" << "\n";
        }
    }

}