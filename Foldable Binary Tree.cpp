bool solve(Node* root1, Node* root2)
{
    if(!root1 && !root2)
        return true;
    if(!root1 || !root2)
        return false;
    if(root1 && root2)
        return (solve(root1->left,root2->right) && solve(root1->right,root2->left));
    return false;
}
bool IsFoldable(Node* root)
{
    // Your code goes here
    if(!root)
        return true;
    return solve(root->left,root->right);
}
