class Solution
   {
         public Node deleteNode(Node root,int k)
         {
         //add code here.
         
             if(root == null)
             return null;
            root.right = deleteNode(root.right,k);
            root.left = deleteNode(root.left,k);
            
            if(root.data >= k)
            return root.left;
            else
            return root;
         }
   }
