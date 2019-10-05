// PASSED
// https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1/?ref=self
int isBalanced_util(Node *r)
{
    if(!r)
        return 0;
    return 1 + max(isBalanced_util(r->left),isBalanced_util(r->right));
}
bool isBalanced(Node *r)
{
    if(!r)
        return true;
    int l_x =isBalanced_util(r->left);
    int r_x =isBalanced_util(r->right);
    if(abs(l_x-r_x) <= 1 &&(isBalanced(r->left) && isBalanced(r->right)))
        return true;
    return false;
}
