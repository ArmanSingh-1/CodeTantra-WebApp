#include <iostream>
using namespace std;

bool check(const string& nums) {
    int total = 0;
    bool flag = false;
    int n = nums.length();

    for (int i = nums.length() - 1; i >= 0; --i) {
        int x = nums[i] - '0';

        if (flag) x *= 2;
        if (x > 9) x -= 9;

        total += x;
        flag = !flag;
    }

    return (total % 10 == 0);
}

int main() {
    string S;
    cin >> S;

    if(check(S)){
        cout << "Valid\n";
    } 
    else{
        cout << "Invalid\n";
    }

    return 0;
}
