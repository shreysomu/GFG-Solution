class Solution{
public:    
    bool isCompleteBT(Node* root){
        //code here
         if(!root)
         return true;
       queue<Node*>Q;
       Q.push(root);
       bool flag=0;
       while(!Q.empty()){
           int n=Q.size();
           while(n--){
               Node*temp=Q.front();
               Q.pop();
               if(temp->left){
                   if(flag)
                   return false;
                   Q.push(temp->left);
               }
               else{
                   flag=1;
               }
               if(temp->right){
                   if(flag)
                   return 0;
                   Q.push(temp->right);
               }
               else{
                   flag=1;
               }
           }
       }
       return 1;
    }
};
