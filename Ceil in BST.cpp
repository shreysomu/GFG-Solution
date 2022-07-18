void findCeilH(Node* root, int input, int &ans) {
    if (!root) {
        return;
    }
    
    if (root->data < ans && root->data >= input) {
        ans = root->data;
        findCeilH(root->left, input, ans);
        return;
    }
    findCeilH(root->right, input, ans);
}
int findCeil(Node* root, int input) {
    if (root == NULL) return -1;

    // Your code here
    int res = INT_MAX;
    findCeilH(root, input, res);
    return res;
}
