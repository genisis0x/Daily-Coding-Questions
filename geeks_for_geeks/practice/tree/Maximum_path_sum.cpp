// PASSED
// https://practice.geeksforgeeks.org/problems/maximum-path-sum/1/?ref=self
int maxPathSum_util(struct Node *r, int &f_value)
{
    if(!r)
        return 0;
    int l_x, r_x;
    l_x = maxPathSum_util(r->left, f_value);
    r_x = maxPathSum_util(r->right, f_value);
    int max_each_node = max(max(l_x,r_x) + r->data, r->data);
    f_value = max(f_value, max(l_x+r_x+r->data, max_each_node));
    return max_each_node;
}

int maxPathSum(Node *r)
{
    int f_value = INT_MIN;
    maxPathSum_util(r, f_value);
    return f_value;
}
