class Solution {
public:
    string compressedString(string word) {
        string result;
        int n = word.size();
        int i = 0;
        while (i < n) {
            char currentChar = word[i];
            int count = 1;
            while (i + 1 < n && word[i + 1] == currentChar && count < 9) {
                i++;
                count++;
            }
            result += to_string(count) + currentChar;
            i++;
        }
        return result;
    }
};