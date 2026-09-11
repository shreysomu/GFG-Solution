class Solution {
    public int sameMod(int[] arr) {

        int gcd = 0;

        for (int i = 1; i < arr.length; i++) {
            gcd = findGcd(gcd, Math.abs(arr[i] - arr[0]));
        }

        // All elements are equal
        if (gcd == 0) {
            return -1;
        }

        // Count divisors of gcd
        int count = 0;

        for (int i = 1; i * i <= gcd; i++) {
            if (gcd % i == 0) {
                count++;

                if (i != gcd / i) {
                    count++;
                }
            }
        }

        return count;
    }

    private int findGcd(int a, int b) {
        while (b != 0) {
            int temp = a % b;
            a = b;
            b = temp;
        }

        return a;
    }
}
