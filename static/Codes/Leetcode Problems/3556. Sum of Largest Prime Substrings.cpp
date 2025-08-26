class Solution {
public:
    bool PrimeChecker(long long n){
        if(n < 2) return false;
        long long N = (long long) sqrt(n);
        for(long long i = 2; i <= N; i++){
            if((n % i) == 0) return false;
        }
        return true;
    }
    
    long long sumOfLargestPrimes(string s) {
        int size_s = s.length();
        set<long long> prime_numbers;

        for(int i = 0; i < size_s; i++){
            string substr = "";
            for(int j = i; j < size_s; j++){
                substr += s[j];
                long long num = stoll(substr);
                if(PrimeChecker(num)){
                    prime_numbers.insert(num);
                }
            }
        }

        long long sum = 0;

        vector<long long> prime_nums(prime_numbers.begin(), prime_numbers.end());
        int size_prime = prime_nums.size();

        for(int i = size_prime - 1; i >= max(0, size_prime - 3); i--){
            sum += prime_nums[i];
        }
        
        return sum;
    }
};