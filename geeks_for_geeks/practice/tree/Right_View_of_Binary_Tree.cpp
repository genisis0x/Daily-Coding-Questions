// PASSED
// https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1/?ref=self
void rightView(Node *root)
{
   if(!root)
    return;
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        for(int i=0; i<n; i++)
        {
            Node *temp = q.front();
            q.pop();
            if(i==n-1)
                cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
}

