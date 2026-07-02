class Solution {
    public boolean divisibleByK(int[] arr, int k) {
        // code here
        Set<Integer> seen = new HashSet<>();
        seen.add(0);
        
        for(int num : arr){
            Set<Integer> next = new HashSet<>();
            for (int r : seen) {
                next.add((r + num) % k);
            }
            if (next.contains(0)) return true;
            seen.addAll(next);
        }
        return false;
    }
}
