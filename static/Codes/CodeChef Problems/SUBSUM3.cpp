#include <bits/stdc++.h>

using namespace std;

bool generate(int N, vector < int > Array, int indx, int total, bool taken) {
    if (indx == N) return taken && (total % 3 == 0);

    return generate(N, Array, indx + 1, total + Array[indx], true) || generate(N, Array, indx + 1, total, taken);
}

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

        if (generate(N, Array, 0, 0, false)) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }

    }
    return 0;
}