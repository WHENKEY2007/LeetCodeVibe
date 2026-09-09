class Solution {
public:
    long long countCommas(long long n) {
        long long totalCommas = 0;
        long long thresholds[] = {
            1000LL, 
            1000000LL, 
            1000000000LL, 
            1000000000000LL, 
            1000000000000000LL
        };
        for (long long t : thresholds) {
            if (n>=t) {
                totalCommas += (n - t + 1);
            } else {
                break;
            }
        }
        return totalCommas;
    }
};