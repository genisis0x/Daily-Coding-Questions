// PASSED
// https://practice.geeksforgeeks.org/problemsBottom View of Binary Tree/bottom-view-of-binary-tree/1/?ref=self

void util(Node *root, map<int, int> &hm, int hd)
{
    if(!root)
        return;
    hm[hd] = root->data;
    util(root->left, hm, hd-1);
    util(root->right, hm, hd+1);
}

void bottomView(Node *root)
{
    if(!root)
        return;
   map<int, int> hm; // keys to store the hd(horizontal distance) and values to store the bottom view of it;
   int hd=0;
   util(root, hm, hd);
   for(auto i= hm.begin(); i!= hm.end(); i++)
        cout<<i->second<<" ";
}

