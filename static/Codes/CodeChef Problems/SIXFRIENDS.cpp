#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int x = 0; x < T; x++) {
        int a, b;
        cin >> a >> b;

        int drooms = a * 3;
        int trooms = b * 2;

        if (drooms > trooms) {
            cout << trooms << "\n";
        }
        else {
            cout << drooms << "\n";
        }
    }

}