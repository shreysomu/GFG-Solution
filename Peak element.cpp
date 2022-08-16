class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
        int ind = -1;
        int largest = -1;
        
        for(int i=0; i<n; i++){
            if(arr[i]>largest){
                ind = i;
                largest = arr[i];
            }
        }
        return ind;
    }
};
