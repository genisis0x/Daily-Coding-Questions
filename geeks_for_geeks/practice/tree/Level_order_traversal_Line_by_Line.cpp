//passed
// https://practice.geeksforgeeks.org/problems/level-order-traversal-line-by-line/1/?ref=self
void levelOrder(Node* node)
{
    if(!node)
        return;
    queue<Node *> q;
    q.push(node);
    q.push(NULL); // push NULL after each level and then use that null to print the '$' sign after every level.
    while(q.size() >1)
    {
        Node *temp=q.front();
        q.pop();
        if(!temp) // when we reaches the new level than we print the sign '$' and add the end of the level(NULL) to the queue. 
        {
            q.push(NULL);
            cout<<"$"<<" ";
        }
        else
        {
            if(temp->left) // push left child.
                q.push(temp->left);
            if(temp->right) // push right child.
                q.push(temp->right);
            cout<<temp->data<<" "; // print the data.
        }
    }
    cout<<"$"; // for the last level it will not print because we are seeing the size of the queue in the while loop should be greater than '1'.
}
