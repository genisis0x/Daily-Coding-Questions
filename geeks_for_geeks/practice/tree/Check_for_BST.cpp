// PASSED
// https://practice.geeksforgeeks.org/problems/check-for-bst/1/?ref=self
static int i=0;

void util(Node *r, map<int, int> &hm)
{
    if(!r)
        return;

    util(r->left, hm);
    hm[i++] = r->data;
    util(r->right, hm);
}


// INORDER Traversal of a True BST will give the sorted array of elements.

bool isBST(Node* root) {
    map<int, int> hm;
    util(root, hm);
    for(int j=1; j<i; j++)
    {
        if(hm[j-1] <= hm[j])
            continue;
        else
            return false;
    }
    i=0;
    return true;
}

