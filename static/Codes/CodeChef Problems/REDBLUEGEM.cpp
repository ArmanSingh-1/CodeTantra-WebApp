#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    cout << max(a * x, b * y);

    return 0;
}