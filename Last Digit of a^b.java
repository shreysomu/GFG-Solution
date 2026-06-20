class Solution {
    public int getLastDigit(String a, String b) {
        
        if (b.equals("0"))
            return 1;

        int lastDigit = a.charAt(a.length() - 1) - '0';

        int expMod4 = 0;
        for (int i = 0; i < b.length(); i++) {
            expMod4 = (expMod4 * 10 + (b.charAt(i) - '0')) % 4;
        }

        if (expMod4 == 0)
            expMod4 = 4;

        int result = 1;
        for (int i = 0; i < expMod4; i++) {
            result = (result * lastDigit) % 10;
        }

        return result;
    }
}
