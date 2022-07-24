class Solution{
   public:
   int maxPathSum(Node* root)
   {
       
       if(root==NULL)
          return 0;
       int sum=0;
       sum=sum+root->data;
       
       int lSum=sum+maxPathSum(root->left);
       int rSum=sum+maxPathSum(root->right);
       
       
       return max(lSum,rSum);
       
   }
};
