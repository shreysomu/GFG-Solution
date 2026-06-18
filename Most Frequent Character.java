class Solution {
    public char getMaxOccuringChar(String s) {
        // code here
        int [] freq = new int[26];
        
        for(int i = 0;i < s.length();i++){
            char currChar = s.charAt(i);
            freq[currChar - 'a']++;
        }
        
        int maxFreq = -1;
        char res = 0;
        
        for(int i = 0;i < 26 ;i++){
            if(freq[i] > maxFreq){
                maxFreq = freq[i];
                res = (char)(i + 'a');
            }
        }
        return res;
    }
}
