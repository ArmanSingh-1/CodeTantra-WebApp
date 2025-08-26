class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int result = -1;
        for(int i = 0; i < nums.size(); i++){
            int sum_of_digits = 0;
            int x = nums[i];
            while(x > 0){
                sum_of_digits += x % 10;
                x /= 10;
            }
            
            if(sum_of_digits == i){
                return i;
            }
        }
        return result;
    }
};