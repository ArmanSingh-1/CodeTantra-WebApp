#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int f1, p1, f2, p2;
    cin >> f1 >> p1 >> f2 >> p2;

    int d1 = abs(f1 - p1);
    int d2 = abs(f2 - p2);

    if (d1 == d2)
        cout << "Both\n";
    else if (d1 < d2)
        cout << "First\n";
    else
        cout << "Second\n";

    return 0;
}