// PASSED
// https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1/?ref=self
void print_left(Node *r)
{
    if(!r)
        return;
    if(r->left)
    {
        cout<<r->data<<" ";
        print_left(r->left);
    }
    else if(r->right)
    {
        cout<<r->data<<" ";
        print_left(r->right);
    }
}

void print_right(Node *r)
{
    if(!r)
        return;
    if(r->right)
    {
        print_right(r->right);
        cout<<r->data<<" ";
    }
    else if(r->left)
    {
        print_right(r->left);
        cout<<r->data<<" ";
    }
}

void print_leaf(Node *r)
{
    if(!r)
        return;
    if(r->left)
       print_leaf(r->left);
    if(!r->left && !r->right)
        cout<<r->data<<" ";
    if(r->right)
       print_leaf(r->right);
}
void printBoundary(Node *r)
{
    if(!r)
        return;
    cout<<r->data<<" ";
    print_left(r->left);
    print_leaf(r->left);
    print_leaf(r->right);
    print_right(r->right);
}
