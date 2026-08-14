class Solution {
    
     public boolean isPossible(int[] arr, int s, int x) {
                 // code here

         long[] a = new long[arr.length + 1];

         a[0] = s;

         long sum = s;

         // Generate the numbers written on the paper
         for (int i = 0; i < arr.length; i++) {
             a[i + 1] = sum + arr[i];
             sum += a[i + 1];
         }

         // Greedy subset sum
         long target = x;

         for (int i = a.length - 1; i >= 0; i--) {
             if (a[i] <= target) {
                 target -= a[i];
             }

             if (target == 0) {
                 return true;
             }
         }

         return false;
     }
 }
