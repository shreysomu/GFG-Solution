stack<int> _push(int arr[],int n)
{
   // your code here
    stack<int> st;
    int curr = INT_MAX;
    for(int i=0;i<n;i++){
        if(curr > arr[i]){
            curr = arr[i];
        }
        st.push(curr);
    }
    return st;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }   
}
