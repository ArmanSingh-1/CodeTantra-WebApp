class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int total_or = 0;
        for (int num : nums) {
            total_or |= num;
        }
        return total_or << (nums.size() - 1);
    }
};