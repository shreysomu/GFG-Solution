class Solution {
    public int maxSum(int arr[]) {
        // code here
        int res = 0 ;
        
        for(int i = 0;i<arr.length-1;i++){
            res = Math.max(res,arr[i]+arr[i+1]);
        }
        return res;
    }
}
