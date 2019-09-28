// PASSED
// https://practice.geeksforgeeks.org/problems/children-sum-parent/1
int util(Node *node)
{
    if(!node)
        return 1;
    if(!node->left && !node->right)
        return 1;
    else
    {
        int r_data=0;
        int l_data=0;
        if(node->right)
            r_data=node->right->data;
        if(node->left)
            l_data=node->left->data;
        if(node->data==l_data+r_data)
        {
            if(util(node->left) && util(node->right))
                return 1;
            else
                return 0;
        }
        else
            return 0;
    }
}
int isSumProperty(Node *node)
{
    if(util(node))
        return 1;
    else
        return 0;
}
