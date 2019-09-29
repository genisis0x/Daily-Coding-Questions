//passed
// https://practice.geeksforgeeks.org/problems/full-binary-tree/1
bool isFullTree (struct Node* root)
{
    if(!root || (!root->left && !root->right))
        return true;
    if(root->left && root->right)
        return (isFullTree(root->left) && isFullTree(root->right));
    return false;
}
