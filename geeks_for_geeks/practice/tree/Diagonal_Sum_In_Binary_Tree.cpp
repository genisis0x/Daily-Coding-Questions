// PASSED
// https://practice.geeksforgeeks.org/problems/diagonal-sum-in-binary-tree/1
void diagonalSum(Node* r)
{
    if(!r)
        return;
    queue<pair<Node *, int> > q;
    q.push(make_pair(r, 0));
    map<int, int> hm; // map to store the value on the keys (+1 for right)
    while(!q.empty())
    {
        pair<Node *, int> temp = q.front(); q.pop();
       int height = temp.second;
       hm[height] += temp.first->data;
        if(temp.first->left)
            q.push(make_pair(temp.first->left, height+1));
        if(temp.first->right)
            q.push(make_pair(temp.first->right, height));
    }
     for(auto i= hm.begin(); i!=hm.end(); i++)
        cout<< i->second <<" ";
    cout<<"\n";
}
