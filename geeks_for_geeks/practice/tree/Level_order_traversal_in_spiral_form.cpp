// PASSED
// https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1/?ref=self
void printSpiral(Node *root)
{
    if(!root)
        return;
    int flag =1; // will be used to toggle after each level
    queue<Node *> q;
    stack<Node *> s; // used to store the level in reverse order
    q.push(root);
    while(!q.empty())
    {
        int size = q.size();
        while(size--)
        {
            Node *temp = q.front(); q.pop();
            if(flag)
                s.push(temp);
            else
                cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
        if(flag)
        {
            while(!s.empty())
            {
                cout<<(s.top())->data<<" "; s.pop();
            }
        }
        flag = !(flag);
    }
}
