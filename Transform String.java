import java.util.HashMap;

class Solution {
    int transform(String s1, String s2) {

        // Different lengths -> impossible
        if (s1.length() != s2.length()) {
            return -1;
        }

        // Check whether both strings contain
        // the same characters with the same frequency
        HashMap<Character, Integer> map = new HashMap<>();

        for (char c : s1.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) + 1);
        }

        for (char c : s2.toCharArray()) {

            if (!map.containsKey(c)) {
                return -1;
            }

            map.put(c, map.get(c) - 1);

            if (map.get(c) < 0) {
                return -1;
            }
        }

        // Find the longest suffix that is already in the
        // correct relative order.
        int i = s1.length() - 1;
        int j = s2.length() - 1;

        int count = 0;

        while (i >= 0 && j >= 0) {

            if (s1.charAt(i) == s2.charAt(j)) {
                i--;
                j--;
            } else {
                count++;
                i--;
            }
        }

        return count;
    }
}
