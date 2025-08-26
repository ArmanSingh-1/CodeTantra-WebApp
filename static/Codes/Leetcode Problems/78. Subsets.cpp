class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        backtrack(0, nums, subset, result);
        return result;
    }

private:
    void backtrack(int start, vector<int>& nums, vector<int>& subset, vector<vector<int>>& result) {
        if (start == nums.size()) {
            result.push_back(subset);
            return;
        }

        subset.push_back(nums[start]);
        backtrack(start + 1, nums, subset, result);
        subset.pop_back();

        backtrack(start + 1, nums, subset, result);
    }
};
