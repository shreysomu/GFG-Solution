class Solution {
	public int solve(int n, String s) {
		// code here
		boolean[] seen = new boolean[26];
		boolean[] rejected = new boolean[26];
		
		int used = 0;
		int countRejected = 0;
		
		for (char ch : s.toCharArray()) {
			int ind = ch - 'A';
			
			if (!seen[ind]) {
				
				// customer arrived
				seen[ind] = true;
				
				if (used < n) {
					// assign computer
					used++;
				}
				else {
					rejected[ind] = true;
					countRejected++;
				}
			}
			else {
				// customer departed
				if (!rejected[ind]) {
					// free computer
					used--;
				}
			}
		}
		
		return countRejected;
	}
}
