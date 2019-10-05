// PASSED
//https://practice.geeksforgeeks.org/problems/k-distance-from-root/1/?ref=self
void printKdistance(Node *root, int k)
{
    if(!root)
        return;
    queue<Node *> q;
    q.push(root);
    int level =0;
    q.push(NULL);
    while(!q.empty())
    {
        Node *temp = q.front(); q.pop();
        if(level==k)
        {
            cout<<temp->data<<" ";
            while(q.size() > 1)
            {
                temp = q.front(); q.pop();
                cout<<temp->data<<" ";
            }
            return;
        }
        if(!temp)
        {
            level++;
            q.push(NULL);
            continue;
        }
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
        }
}
