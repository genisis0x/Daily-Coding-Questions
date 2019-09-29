//PASSED
// https://practice.geeksforgeeks.org/problems/level-order-traversal/1

void levelOrder(Node* node)
{
    queue<Node *> q;
    if(!node)
        return ;
    q.push(node);
    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}
