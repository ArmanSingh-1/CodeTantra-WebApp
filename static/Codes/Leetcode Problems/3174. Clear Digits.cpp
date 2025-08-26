class Solution {
public:
    string clearDigits(string s) {
        vector<char> result;
        for (char ch : s) {
            if (!isdigit(ch)) {
                result.push_back(ch);
            } else if (isdigit(ch) && !result.empty()) {
                result.pop_back();
            }
        }
        return string(result.begin(), result.end());
    }
};