#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int A = 0, B = 0, C = 0;
    cin >> A >> B >> C;
    if (A + B > C and B + C > A and C + A > B)
        cout << "Yes";
    else
        cout << "No";
}