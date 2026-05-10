class Solution {
    public int maxProfit(int x, int y, int[] a, int[] b) {
        // code here
                int n = a.length;
        long totalB = 0;
        Integer[] diff = new Integer[n];
        for (int i = 0; i < n; i++) {
            totalB += b[i];
            diff[i] = a[i] - b[i];
        }
        // sort differences in descending order
        Arrays.sort(diff, Collections.reverseOrder());
        // prefix sums of sorted differences
        long[] prefix = new long[n + 1];
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + diff[i];
        }
        int L = Math.max(0, n - y);      // minimum tasks that must go to A
        int R = Math.min(x, n);          // maximum tasks that can go to A
        long best = Long.MIN_VALUE;
        for (int k = L; k <= R; k++) {
            if (prefix[k] > best) best = prefix[k];
        }
        return (int) (totalB + best);
    }
}
