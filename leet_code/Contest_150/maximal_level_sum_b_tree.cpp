//
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// https://leetcode.com/contest/weekly-contest-150/problems/maximum-level-sum-of-a-binary-tree/
// PASSED
// Created by Manmeet Singh Parmar
#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int height(TreeNode *root)
    {
        if (root == NULL)  
        return 0;  
        else
        {  
            int lDepth = height(root->left);  
            int rDepth = height(root->right);  
      
            if (lDepth > rDepth)  
                return(lDepth + 1);  
            else
                return(rDepth + 1);
        }
    }
    
public:
   void eachlevelsum(TreeNode* root, int level, int *c)
    {
        if(root == NULL)
            return;
        if(level == 1)
           *c += root->val;
        else if(level > 1)
        {
            eachlevelsum(root->left, level -1, c);
            eachlevelsum(root->right, level -1, c);
        }
    }
public:
    int maxLevelSum(TreeNode* root) 
    {
        int h = height(root);
        int level = 1;
        int c = INT_MIN;
        for(int i = 1; i <=h; i++)
        {
            int ct = 0;
            eachlevelsum(root, i, &ct);
            if(ct >=c)
            {
                if(c == ct)
                {
                    c = ct;
                    level = (level > i) ? i : level;
                }
                else
                {
                    level = i;
                    c = ct;
                }
            }
        }
        return level;
    }
};