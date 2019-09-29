// PASSED
// GOOD QUESTION
//https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1/?ref=self
void connect(Node *p)
{
    if(!p)
        return;
    queue<Node *> q;
    q.push(p);
    q.push(NULL);
    while(!q.empty())
    {
        Node *temp = q.front(); q.pop();
        if(temp)
        {
            temp->nextRight=q.front();
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
        else if(!q.empty())
            q.push(NULL);
    }
}
