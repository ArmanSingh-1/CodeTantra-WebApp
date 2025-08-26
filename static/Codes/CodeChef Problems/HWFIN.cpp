#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int X = 0, Y = 0;
    cin >> X >> Y;
    if (X + (Y * 10) >= 100)
        cout << "YES";
    else
        cout << "NO";
}