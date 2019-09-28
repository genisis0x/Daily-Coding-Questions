// Passed
// https://practice.geeksforgeeks.org/problems/mirror-tree/1
void mirror(Node* node)
{
     if(!node)
        return;
     Node *temp = node->left;
     node->left = node->right;
     node->right= temp;
     if(node->left)
        mirror(node->left);
     if(node->right)
        mirror(node->right);
}
