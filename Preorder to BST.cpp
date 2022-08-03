
class Solution{
public:
      Node* BST(int arr[], int l, int h){

          if(l>h) 
          return NULL;
    Node* root = newNode(arr[l]);
           int r=l+1;
    while(arr[r]<arr[l] && r<=h) 
               r++;
    root->left = BST(arr, l+1, r-1);
    root->right = BST(arr, r, h);
    return root;
}

    //Function that constructs BST from its preorder traversal.
    Node* post_order(int pre[], int size)
    {
        //code here
        if(size==0)
        return NULL;
        return BST(pre,0,size-1);
    }
};
