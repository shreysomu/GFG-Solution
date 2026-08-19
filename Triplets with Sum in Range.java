class Solution {

    public int countTriplets(int[] arr, int l, int r) {
        // code here
        
        //brute force
        int n = arr.length;
        int count = 0;
        
        for(int i = 0;i<n-2;i++){
            for(int j = i+1 ; j<n-1;j++){
                for(int k = j+1;k<n;k++){
                    if(arr[i]+arr[j]+arr[k]>=l && arr[i]+arr[j]+arr[k]<=r){
                        count++;
                    }

                }
            }
        }
        return count;
    }
}
