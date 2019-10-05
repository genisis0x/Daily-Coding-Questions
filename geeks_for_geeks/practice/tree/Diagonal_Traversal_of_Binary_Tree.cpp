// PASSED
// https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1/?ref=selfi

void diagonalPrint(Node *root)
{
    Node* temp;
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        temp=q.front(); cout<<temp->data<<" "; q.pop();
        while(temp)
	{
            if(temp->left)
                q.push(temp->left);
            temp=temp->right;
            if(temp)
                cout<<temp->data<<" ";
        }
    }
}
