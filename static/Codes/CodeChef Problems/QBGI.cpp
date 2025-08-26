#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string S;
        cin >> S;

        int boys = 0, girls = 0, count = 0;

        for (char ch: S) {
            if (ch == 'B') boys++;
            else if (ch == 'G') girls++;

            count++;

            if (boys > 2 * girls) {
                break;
            }

        }

        cout << count << endl;
    }
    return 0;
}