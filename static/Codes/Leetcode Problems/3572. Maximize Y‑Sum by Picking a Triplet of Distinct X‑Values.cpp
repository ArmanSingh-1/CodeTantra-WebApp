class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        unordered_map<int, int> MaximumYPairs;

        for(int i =0; i < x.size(); i++){
            if(MaximumYPairs.find(x[i]) == MaximumYPairs.end()){
                MaximumYPairs[x[i]] = y[i];
            }
            else{
                MaximumYPairs[x[i]] = max(MaximumYPairs[x[i]], y[i]);
            }
        }

        vector<int> Array; 
        for(const auto& YPairs : MaximumYPairs){
            Array.push_back(YPairs.second);
        }

        if(Array.size() < 3){
            return -1;
        }

        sort(Array.begin(), Array.end(), greater<int>());
        return Array[0] + Array[1] + Array[2];
    }
};