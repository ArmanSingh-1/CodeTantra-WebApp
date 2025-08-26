#include <bits/stdc++.h>

using namespace std;

void calculate(int N, int K, vector < int > A, vector < int > B) {
    map < int, int > Lindx;
    for (int i = 0; i < N; i++) {
        Lindx[A[i]] = i;
    }

    vector < long long > result(N, 0);
    multiset < int > coins;

    long long sum = 0;

    for (auto & [L, indx]: Lindx) {
        result[indx] = sum;

        coins.insert(B[indx]);
        sum += B[indx];

        if ((int) coins.size() > K) {
            auto it = coins.begin();
            sum -= * it;
            coins.erase(it);
        }
    }

    for (long long stolen: result) {
        cout << stolen << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int x = 0; x < T; x++) {
        int N, K;
        cin >> N >> K;

        vector < int > A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        vector < int > B(N);
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }

        calculate(N, K, A, B);
        cout << "\n";

    }
    return 0;
}