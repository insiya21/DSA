class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        bool isPositive = !( (dividend < 0) ^ (divisor < 0) );
        long long dividendAbs = abs((long long)dividend);
        long long divisorAbs = abs((long long)divisor);
        long long start = 0, end = dividendAbs;
        long long result = 0;

        while (start <= end) {
            long long mid = start + (end - start) / 2;
            if (mid * divisorAbs <= dividendAbs) {
                result = mid;
                start = mid + 1;  
            } else {
                end = mid - 1;  
            }
        }
        return isPositive ? result : -result;
    }
};
