// PASSED
// https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1/?ref=self 
void leftView(Node *r)
{
   if(!r)
        return;
    queue<Node *> q;
    q.push(r);
    while(!q.empty())
    {
        int size = q.size();
        for(int i=0; i<size; i++)
        {
            Node *temp = q.front();
            q.pop();
            if(i==0)
                cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
}

