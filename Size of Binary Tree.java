
class Solution {
    public int getSize(Node root) {
        // code here
        if(root  == null)
        return 0 ;
        
        int res = 1 + getSize(root.left) + getSize(root.right);
        
        return res;
    }
}
