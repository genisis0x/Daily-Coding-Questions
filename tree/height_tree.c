#include <stdlib.h>
#include <stdbool.h>
#define max(a, b) (a < b) ? b : a
typedef struct Bst_Node
{
    int value;
    struct Bst_Node *left;
    struct Bst_Node *right;
} t_bst;

t_bst *root = NULL;

int height_tree(t_bst *node)
{
    if(!node) return -1;
    else return 1 + (max(height_tree(node->left), height_tree(node->right)));
}

t_bst *new (int data)
{
    t_bst *node = (t_bst *)malloc(sizeof(t_bst));
    node->value = data;
    node->left = node->right = NULL;
    return node;
}

void insert(t_bst **root, int item)
{
    if (!*root)
    {
        *root = new (item);
    }
    else if (item <= (*root)->value)
        insert(&(*root)->left, item);
    else
        insert(&(*root)->right, item);
}

#include <stdio.h>
int main(void)
{
    printf("Insert the nodes 15, 10, 20, 25, 8, 12, 3\n");
    insert(&root, 15);
    insert(&root, 10);
    insert(&root, 20);
    insert(&root, 25);
    insert(&root, 8);
    insert(&root, 12);
    insert(&root, 3);
    printf("The height of the tree is %d\n", height_tree(root));
}