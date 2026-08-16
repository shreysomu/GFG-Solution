class Solution {
    public int countWithout(int n, int d) {
        if (n == 0) {
            return 0;
        }

        String s = String.valueOf(n);
        int len = s.length();

        int count = 0;

        // Count numbers with fewer digits than n
        for (int digits = 1; digits < len; digits++) {
            if (d == 0) {
                // First digit: 1-9 => 9 choices
                // Remaining digits: 1-9 => 9 choices
                count += 9 * (int) Math.pow(9, digits - 1);
            } else {
                // First digit: 1-9 excluding d => 8 choices
                // Remaining digits: 0-9 excluding d => 9 choices
                count += 8 * (int) Math.pow(9, digits - 1);
            }
        }

        // Count numbers having the same number of digits as n
        for (int i = 0; i < len; i++) {
            int current = s.charAt(i) - '0';
            int remaining = len - i - 1;

            int smallerChoices;

            if (i == 0) {
                // First digit cannot be 0
                smallerChoices = current - 1;

                if (d > 0 && d < current) {
                    smallerChoices--;
                }
            } else {
                // Other digits can be 0
                smallerChoices = current;

                if (d < current) {
                    smallerChoices--;
                }
            }

            count += smallerChoices * (int) Math.pow(9, remaining);

            // If current digit is d, we cannot continue
            if (current == d) {
                return count;
            }
        }

        // n itself doesn't contain d
        return count + 1;
    }
}
