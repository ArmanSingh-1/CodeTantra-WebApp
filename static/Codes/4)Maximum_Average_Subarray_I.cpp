#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        if(k > n) return 0;
        double sum = 0;

        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }
        
        double maxSum = sum;
        
        for(int j = k; j < n; j++) {
            sum += nums[j] - nums[j-k];
            maxSum = max(maxSum, sum);
        }
        return maxSum / k;
    }
};

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int k;
    cin >> k;

    Solution X;
    double maxAverage = X.findMaxAverage(nums, k);
    cout << maxAverage << endl;

    return 0;
}