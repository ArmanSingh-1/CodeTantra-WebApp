#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int x = 0; x < T; x++) {
        int a;
        cin >> a;
        
        if(a > 20){
            cout << "HOT" << "\n";
        }
        else{
            cout << "COLD" << "\n";
        }
    }
}
