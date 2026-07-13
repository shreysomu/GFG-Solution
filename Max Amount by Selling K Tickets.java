import java.util.*;

class Solution {
    public int maxAmount(int[] arr, int k) {
        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());

        for (int x : arr) {
            pq.offer(x);
        }

        long ans = 0;
        long MOD = 1000000007L;

        while (k-- > 0 && !pq.isEmpty()) {
            int curr = pq.poll();
            ans = (ans + curr) % MOD;

            if (curr > 1) {
                pq.offer(curr - 1);
            }
        }

        return (int) ans;
    }
}
