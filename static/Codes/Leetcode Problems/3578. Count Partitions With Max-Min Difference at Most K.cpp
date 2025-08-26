class Solution {
public:
    const int MOD = 1e9 + 7;
    
    int countPartitions(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> Prev(n+1, 0);
        vector<int> Array(n+2, 0);
        Prev[0] = 1;
        Array[1] = 1;

        deque<int> MaxTracker, MinTracker;
        int left = 0;

        for(int i = 0; i < n; i++){
            while(!MinTracker.empty() && nums[MinTracker.back()] > nums[i]){
                MinTracker.pop_back();                
            }
            MinTracker.push_back(i);
            
            while(!MaxTracker.empty() && nums[MaxTracker.back()] < nums[i]){
                MaxTracker.pop_back();                
            }
            MaxTracker.push_back(i);

            while((nums[MaxTracker.front()] - nums[MinTracker.front()]) > k){
                if(MaxTracker.front() == left) MaxTracker.pop_front();
                if(MinTracker.front() == left) MinTracker.pop_front();
                left++;
            }

            Prev[i+1] = (Array[i+1] - Array[left] + MOD) % MOD;
            Array[i+2] = (Array[i+1] + Prev[i+1]) % MOD;
        }

        return Prev[n];
    }
};