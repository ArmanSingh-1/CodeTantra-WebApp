#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int h;
    cin >> h;
    if (h == 8)
        cout << "PERFECT";
    else if (h > 8)
        cout << "MORE";
    else
        cout << "LESS";
}