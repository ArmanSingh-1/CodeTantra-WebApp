#include <bits/stdc++.h>

using namespace std;

int digit_sum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x = x / 10;
    }
    return sum;
}

int main() {
    int T;
    cin >> T;

    for (int x = 0; x < T; x++) {
        int a;
        cin >> a;

        cout << digit_sum(a) << "\n";
    }
}