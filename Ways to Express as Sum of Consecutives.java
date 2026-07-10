class Solution {
    public int getCount(int N) {

        int count = 0;

        // L = number of gaps between consecutive numbers
        for (long L = 1; L * (L + 1) < 2L * N; L++) {

            long numerator = N - (L * (L + 1)) / 2;

            if (numerator > 0 && numerator % (L + 1) == 0) {
                count++;
            }
        }

        return count;
    }
}
