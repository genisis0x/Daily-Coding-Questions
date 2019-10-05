// PASSED
// https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1/?ref=self
void printTopViewUtil(Node* root, int height,
    int hd, map<int, pair<int, int> >& m)
{
    // Base Case
    if (root == NULL)
        return;
    if (m.find(hd) == m.end()) {
        m[hd] = make_pair(root->data, height);
    }
    else{
        pair<int, int> p = (m.find(hd))->second;

        if (p.second > height) {
            m.erase(hd);
            m[hd] = make_pair(root->data, height);
        }
    }
    printTopViewUtil(root->left, height + 1, hd - 1, m);
    printTopViewUtil(root->right, height + 1, hd + 1, m);
}
void topView(struct Node *root)
{
    map<int, pair<int, int> > m;
    printTopViewUtil(root, 0, 0, m);

    for (auto it = m.begin(); it != m.end(); it++) {
        pair<int, int> p = it->second;
        cout << p.first << " ";
    }
}

