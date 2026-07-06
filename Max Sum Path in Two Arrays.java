class Solution {
    public int maxPathSum(int[] a, int[] b) {

        int i = 0, j = 0;
        int sumA = 0, sumB = 0;
        int ans = 0;

        while (i < a.length && j < b.length) {

            if (a[i] < b[j]) {
                sumA += a[i++];
            }
            else if (a[i] > b[j]) {
                sumB += b[j++];
            }
            else {

                ans += Math.max(sumA, sumB) + a[i];

                sumA = 0;
                sumB = 0;

                i++;
                j++;
            }
        }

        while (i < a.length)
            sumA += a[i++];

        while (j < b.length)
            sumB += b[j++];

        ans += Math.max(sumA, sumB);

        return ans;
    }
}

