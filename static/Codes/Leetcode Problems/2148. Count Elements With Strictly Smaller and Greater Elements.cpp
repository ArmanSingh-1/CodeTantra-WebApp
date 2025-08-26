class Solution {
public:
    int countElements(vector<int>& nums) {
        int minVal = nums[0];
        int maxVal = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < minVal) {
                minVal = nums[i];
            }
            if (nums[i] > maxVal) {
                maxVal = nums[i];
            }
        }

        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > minVal && nums[i] < maxVal) {
                count++;
            }
        }

        return count;
    }
};