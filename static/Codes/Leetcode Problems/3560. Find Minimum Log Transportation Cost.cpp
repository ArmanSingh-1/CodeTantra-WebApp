class Solution {
public:
    long long cut_reduction(int x, int k){
        long long mincost = LLONG_MAX;
        for(int i = 1; i <= x/2; i++){
            int j = x - i;
            if((i <= k) && (j <= k)){
                long long cost = (long long) i*j;
                mincost = min(cost, mincost);
            }
        }
        return mincost;
    }
    
    long long minCuttingCost(int n, int m, int k) {
        if((n <= k) && (m <= k)){
            return 0;
        }

        long long mincost = LLONG_MAX;
        
        if((n > k) && (m <= k)){
            mincost = cut_reduction(n, k);    
        }

        if((n <= k) && (m > k)){
            mincost = cut_reduction(m, k);
        }

        if((n > k) && (m > k)){
            mincost = min(cut_reduction(n, k), cut_reduction(m, k));
        }

        return mincost;
    }
};