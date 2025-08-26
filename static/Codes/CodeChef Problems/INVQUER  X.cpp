#include <bits/stdc++.h>

using namespace std;

int Merge(int low, int mid, int high, vector < int > & B) {
    int p1 = low, p2 = mid + 1;

    vector < int > temp;
    int count = 0;

    while ((p1 <= mid) && (p2 <= high)) {
        if (B[p1] <= B[p2]) {
            temp.push_back(B[p1++]);
        }
        else {
            temp.push_back(B[p2++]);
            count += (mid - p1 + 1);
        }
    }

    while (p1 <= mid) {
        temp.push_back(B[p1++]);
    }

    while (p2 <= high) {
        temp.push_back(B[p2++]);
    }

    for (int i = 0; i < (int) temp.size(); i++) {
        B[low + i] = temp[i];
    }

    return count;
}

int MergeSort(int low, int high, vector < int > & B) {
    if (low >= high) return 0;
    int count = 0;
    int mid = low + (high - low) / 2;

    count += MergeSort(low, mid, B);
    count += MergeSort(mid + 1, high, B);
    count += Merge(low, mid, high, B);

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int x = 0; x < T; x++) {
        int N, Q;
        cin >> N >> Q;

        vector < int > A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        for (int y = 0; y < Q; y++) {
            int L, R;
            cin >> L >> R;

            vector < int > B(N);
            for (int j = 0; j < N; j++) {
                if (A[j] < L) {
                    B[j] = L;
                }
                else if ((L <= A[j]) && (A[j] <= R)) {
                    B[j] = A[j];
                }
                else if (R < A[j]) {
                    B[j] = R;
                }
            }
            cout << MergeSort(0, N - 1, B) << "\n";
        }
    }
    return 0;
}