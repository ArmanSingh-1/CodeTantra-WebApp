#include <bits/stdc++.h>

using namespace std;

void winner(int N, int M, int K) {
    if (N <= K || M <= K) {
        cout << "Alice\n";
        return;
    }

    if (min(N, M) <= K) {
        cout << "Alice\n";
        return;
    }

    cout << "Bob\n";
    return;
}

int main() {

    int T;
    cin >> T;

    for (int x = 0; x < T; x++) {
        int N, M, K;
        cin >> N >> M >> K;

        winner(N, M, K);
    }
    return 0;
}