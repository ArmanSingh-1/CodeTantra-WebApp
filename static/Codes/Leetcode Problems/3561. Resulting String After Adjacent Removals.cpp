class Solution {
public:
    bool check(char a, char b) {
        return (std::abs(a - b) == 1 || std::abs(a - b) == 25);
    }
    string resultingString(string s) {
        vector<char> result;
        for (char ch : s) {
            if (!result.empty() && check(ch, result.back())) {
                result.pop_back();
            } else {
                result.push_back(ch);
            }
        }
        return string(result.begin(), result.end());
    }
};