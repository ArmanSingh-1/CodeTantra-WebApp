#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int x, y, z;
    cin >> x >> y >> z;
    int limit = x - y * z;
    if (limit > 0)
        cout << limit;
    else
        cout << -1;

}