class Solution {
	
	static final long MOD = 1_000_000_007L;
	
	public int prefixStrings(int n) {
		
		        // code here

		long catalan = 1; // C0 = 1
		
		for (int i = 1; i <= n; i++) {
			
			// C(i) = C(i-1) * 2 * (2i-1) / (i+1)
			catalan = catalan * 2 % MOD;
			catalan = catalan * (2L * i - 1) % MOD;
			
			// Divide by (i + 1) using modular inverse
			catalan = catalan * modInverse(i + 1) % MOD;
		}
		
		return (int) catalan;
	}
	
	private long modInverse(long x) {
		return power(x, MOD - 2);
	}
	
	private long power(long a, long b) {
		
		long result = 1;
		
		while (b > 0) {
			
			if ((b & 1) == 1) {
				result = result * a % MOD;
			}
			
			a = a * a % MOD;
			b >>= 1;
		}
		
		return result;
	}
}
