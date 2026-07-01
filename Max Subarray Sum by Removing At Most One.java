class Solution {
    public int maxSumSubarray(int[] arr) {

        int n = arr.length;

        int ans = arr[0];
        int prevNoDelete = arr[0];
        int prevOneDelete = -1000000000;

        for (int i = 1; i < n; i++) {

            int currNoDelete = Math.max(prevNoDelete + arr[i], arr[i]);

            int currOneDelete = Math.max(prevNoDelete,
                                         prevOneDelete + arr[i]);

            ans = Math.max(ans,
                           Math.max(currNoDelete, currOneDelete));

            prevNoDelete = currNoDelete;
            prevOneDelete = currOneDelete;
        }

        return ans;
    }
}
