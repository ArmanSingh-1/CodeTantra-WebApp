#include <bits/stdc++.h>

using namespace std;

int main() {

    int T;
    cin >> T;

    for (int x = 0; x < T; x++) {
        int N, M, K;
        cin >> N >> M >> K;

        int total = N * M;

        if (total < K) {
            cout << "0\n";
            continue;
        }
        if (K == 0) {
            cout << total << "\n";
            continue;
        }

        int bob_min = total;

        for (int row = 1; row < N; row++) {
            int part1 = row * M;
            int part2 = (N - row) * M;
            if (part1 >= K) bob_min = min(bob_min, part1);
            if (part2 >= K) bob_min = min(bob_min, part2);
        }

        for (int col = 1; col < M; col++) {
            int part1 = col * N;
            int part2 = (M - col) * N;
            if (part1 >= K) bob_min = min(bob_min, part1);
            if (part2 >= K) bob_min = min(bob_min, part2);
        }

        cout << total - bob_min << "\n";
    }
    return 0;
}