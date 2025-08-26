class Solution {
public:
    int compress(vector<char>& chars) {
        int k = 0;
        int n = chars.size();
        for (int i = 0; i < n; i++) {
            char currentChar = chars[i];
            int count = 0;
            while (i < n && chars[i] == currentChar) {
                count++;
                i++;
            }
            chars[k++] = currentChar;
            if (count > 1) {
                for (char digit : to_string(count)) {
                    chars[k++] = digit;
                }
            }
        }
        return k;
    }
};