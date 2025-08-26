#include <bits/stdc++.h>

using namespace std;

int getFirstDigit(int n) {
    while (n >= 10) {
        n /= 10;
    }
    return n;
}

int main() {
    int T;
    cin >> T;

    for (int x = 0; x < T; x++) {
        int a;
        cin >> a;
        
        int last = a % 10;
        int first = getFirstDigit(a);
        
        cout << (first + last) << "\n";
    }
}
