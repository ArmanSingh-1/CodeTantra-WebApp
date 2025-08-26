class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> res(n - k + 1, vector<int>(m - k + 1, 0));
        for(int i = 0; i <= n - k; i++){
            for(int j = 0; j <= m - k; j++){
                set<int> vals;
                for(int p = i; p < i+k; p++){
                    for(int q = j; q < j+k; q++){
                        vals.insert(grid[p][q]);
                    }
                }
                if(vals.size() < 2) {
                    res[i][j] = 0;
                }
                else{
                    int min_diff = INT_MAX;
                    int prev = *vals.begin();
                    for(auto it = next(vals.begin()); it != vals.end();  it++){
                        min_diff = min(min_diff, abs(*it - prev));
                        prev = *it;
                    }
                    res[i][j] = min_diff;
                }
            }
        }
        return res;
    }
};