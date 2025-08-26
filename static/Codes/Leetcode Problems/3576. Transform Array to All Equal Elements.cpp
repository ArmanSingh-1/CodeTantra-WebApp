class Solution {
public:
    int OperationCounter(vector<int> nums, int x){
        int n = nums.size();
        int operations = 0;

        for(int i = 0; i < n-1; i++){
            if(nums[i] != x){
                nums[i] *= -1;
                nums[i+1] *= -1;
                operations++;
            }
        }
        return (nums[n-1] == x) ? operations : INT_MAX;
    }
    
    bool canMakeEqual(vector<int>& nums, int k) {
        int positive = OperationCounter(nums, 1);
        int negative = OperationCounter(nums, -1);
        return min(positive, negative) <= k;
    }
};