class Solution {
public:
    long long Calculate(int i, const vector<int>& nums, int n, long long target){
        long long check = 1;
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                if((check != 0) && (nums[j] > (target/check))) return -1;
                check *= nums[j];
            }
        }
        return check;
    }
    
    bool checkEqualPartitions(vector<int>& nums, long long target) {
        int n = nums.size();
        vector<int> subsets;

        for(int i = 1; i < (1 << n); i++){
            long long check = Calculate(i, nums, n, target);
            if(check == target){
                subsets.push_back(i);
            }
        }

        int m = subsets.size();
        int total = (1 << n) - 1;
        for(int k = 0; k < m; k++){
            for(int x = k+1; x < m; x++){
                if(((subsets[k] & subsets[x]) == 0) && ((subsets[k] | subsets[x]) == total)){
                    return true;
                }
            }
        }
        return false;
    }
};