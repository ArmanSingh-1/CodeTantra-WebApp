class Solution {
public:
     int fun(char s) {
        if (s == 'I') return 1;
        if (s == 'V') return 5;
        if (s == 'X') return 10;
        if (s == 'L') return 50;
        if (s == 'C') return 100;
        if (s == 'D') return 500;
        if (s == 'M') return 1000;
        return 0;
    }

    int romanToInt(string s) {
        int total = 0;
        for (int i = 0; i < s.length(); ++i) {
            int curr = fun(s[i]);
            int next = (i + 1 < s.length()) ? fun(s[i + 1]) : 0;
            if (curr < next)
                total -= curr;
            else
                total += curr;
        }
        return total;
    }
};