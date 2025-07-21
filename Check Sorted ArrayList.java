// User function Template for Java
class Solution {
    public static boolean isSorted(ArrayList<Integer> list) {
        // code here
        boolean ascending = true;
        boolean descending = true;
        
        for(int i = 1;i<list.size();i++){
            if(list.get(i)<list.get(i-1))
            ascending = false;
            
            if(list.get(i)>list.get(i-1))
            descending = false;
        }
        
        return ascending || descending;
    }
}
