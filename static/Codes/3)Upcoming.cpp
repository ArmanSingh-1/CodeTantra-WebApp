#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& ar) {
        int l = 0, h = ar.size()-1;
        int m = INT_MAX;
        
        while(l <= h){
            int mid = l + (h - l)/2;

            if(ar[l] <= ar[h]){
                m = min(m, ar[l]);
                break;
            }
            
            if(ar[l] <= ar[mid]){
               m = min(m, ar[l]);
               l = mid+1; 
            }
            else{
                h = mid-1;
                m = min(m, ar[mid]);
                
            }
        }
        return m;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> ar(n);
    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }

    Solution X;
    int mini = X.findMin(ar);
    cout << mini << endl;

    return 0;
}