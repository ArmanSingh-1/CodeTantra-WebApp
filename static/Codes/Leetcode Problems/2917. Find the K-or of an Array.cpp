class Solution {
public:
    bool checkBit(int N, int i){
        return (N & (1<<i)) != 0;
    }

    int findKOr(vector<int>& nums, int k) {
        int result = 0;
        for(int i = 0; i < 32; i++){
            int count = 0;
            for(int j = 0; j < nums.size(); j++){
                if(checkBit(nums[j], i)){
                    count++;
                }
            }
            if(count >= k){
                result += (1<<i);
            }
        }
        return result;
    }
};