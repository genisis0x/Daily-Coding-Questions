// PASSED
// https://practice.geeksforgeeks.org/problems/vertical-sum/1
void verticalSumUtil(Node *node, int hd, 
                     map<int, int> &Map) 
{ 
    if (node == NULL) return; 
    verticalSumUtil(node->left, hd-1, Map);
    Map[hd] += node->data;
    verticalSumUtil(node->right, hd+1, Map);
}

void printVertical(Node *root)
{
    map < int, int> Map;
    verticalSumUtil(root, 0, Map); 
  
    for (auto it = Map.begin(); it != Map.end(); ++it) 
        cout<<it->second<<" ";
}
