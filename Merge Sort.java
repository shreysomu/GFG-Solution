class Solution {
    
    public static void merge(int[] arr , int l , int r , int mid){
        int leftArrLen = mid - l+1;
        int rightArrLen = r - mid;
        
        int[] leftArr = new int[leftArrLen];
        int[] rightArr = new int[rightArrLen];
        
        //Copy the left half content of arr into leftArr
        int k = l;
        for(int i = 0;i<leftArrLen;i++){
            leftArr[i] = arr[k];
            k++;
        }
        
        //copy the right half of arr into rightArr
        k = mid + 1;
        for(int j = 0;j<rightArrLen ;j++){
            rightArr[j] = arr[k];
            k++;
        }
        
        //Merge Exact logic
        int i = 0;
        int j = 0;
        k = l;
        
        while(i < leftArrLen && j < rightArrLen){
            if(leftArr[i] < rightArr[j]){
                arr[k] = leftArr[i];
                i++;
                k++;
            }
            else{
                arr[k] = rightArr[j];
                j++;
                k++;
            }
        }
        
        //if left array fully consumed and right not
        //then copy rem elements of right array into ans array
        
        while(j < rightArrLen){
            arr[k] = rightArr[j];
            j++;
            k++;
        }
        
        
        //if right arr fully consumed and left not
        //then copy rem elements of left arr into ans arr
        
        while(i < leftArrLen){
            arr[k] = leftArr[i];
            i++;
            k++;
        }
        
    }
    public void mergeSort(int arr[], int l, int r) {
        // code here
        // base case
        
        if(l >= r){
            return;
        }
        
        //braek into two halves
        
        int mid = (l+r)/2;
        
        //sorting left Array
        mergeSort(arr,l,mid);
        
        //Sorting right array
        mergeSort(arr,mid+1,r);
        
        //Merge both sorted halves
        merge(arr,l,r,mid);
    }
}
