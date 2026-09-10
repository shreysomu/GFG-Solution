class Solution {
    public int pairCount(int x, int y) {
        
        // If LCM is not divisible by GCD
        if (y % x != 0) {
            return 0;
        }

        int n = y / x;
        int count = 0;

        // Count distinct prime factors of n
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                count++;

                // Remove all occurrences of this prime
                while (n % i == 0) {
                    n /= i;
                }
            }
        }

        // Remaining number is a prime factor
        if (n > 1) {
            count++;
        }

        // Each distinct prime can go to either a or b
        return 1 << count;
    }
}
