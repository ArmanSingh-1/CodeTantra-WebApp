#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int x = 0; x < T; x++) {
        int a, b;
        cin >> a >> b;
        if (a <= b) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }

}