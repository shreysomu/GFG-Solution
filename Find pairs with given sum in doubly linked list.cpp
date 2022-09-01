class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        vector<pair<int, int>> res;
        Node *left=head, *right=head;
        while(right->next) {
            right=right->next;
        }
        while(left && right && left->data <  right->data) {
            if(left->data + right->data == target) {
                res.push_back({left->data, right->data});
                left=left->next;
                right=right->prev;
            }
            else if(left->data + right->data < target)
                    left=left->next;
            else right=right->prev;
        }
        return res;
    }
};
