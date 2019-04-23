#include "bst.h"

int height_tree(t_bst *node)
{
    if(!node) return -1;
    else return 1 + (max(height_tree(node->left), height_tree(node->right)));
}
