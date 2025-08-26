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

        vector < int > Array(N);
        for (int i = 0; i < N; i++) {
            cin >> Array[i];
        }

        sort(Array.begin(), Array.end());

        int mini = INT_MAX;
        for (int i = 0; i < N; i++) {
            int time_taken = Array[i] + (N - 1 - i);
            mini = min(time_taken, mini);
        }
        mini = min(mini, N);

        cout << mini << "\n";

    }
    return 0;
}