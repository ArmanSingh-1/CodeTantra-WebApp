#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int x = 0; x < T; x++) {
        int N;
        cin >> N;
        int even = 0;
        int odd = 0;

        vector < int > Array(N);
        for (int i = 0; i < N; i++) {
            cin >> Array[i];
            if (i % 2 == 0) {
                even += Array[i];
            }
            else {
                odd += Array[i];
            }
        }

        cout << max(odd, even) << "\n";

    }
    return 0;
}