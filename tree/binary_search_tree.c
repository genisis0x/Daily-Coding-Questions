/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_search_tree.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <maparmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 20:38:26 by maparmar          #+#    #+#             */
/*   Updated: 2019/04/18 21:22:36 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>
typedef struct Bst_Node
{
	int value;
	struct Bst_Node *left;
	struct Bst_Node *right;
} t_bst;

t_bst *root = NULL;

int search(t_bst **root, int item)
{
	if(!(*root)) return 0;
	if((*root)->value == item) return 1;
	else if (item <= (*root)->value)
	{
		return search(&(*root)->left, item);
	}
	else
	{
		return search(&(*root)->right, item);
	}
}

t_bst *new(int data)
{
	t_bst *node = (t_bst *)malloc(sizeof(t_bst));
	node->value = data;
	node->left = node->right = NULL;
	return node;
}

void insert(t_bst **root, int item)
{ 
	if(!*root)
	{
		*root = new (item);
	}
	else if (item <= (*root)->value) insert(&(*root)->left, item);
	else insert(&(*root)->right, item);
}

#include <stdio.h>
int main (void)
{
	printf("Insert the nodes 15, 10, 20, 25, 8, 12\n");
	insert(&root, 15);
	insert(&root, 10);
	insert(&root, 20);
	insert(&root, 25);
	insert(&root, 8);
	insert(&root, 12);
	printf("Searching the element 25\n");
	if (search(&root,25) == 1)
	{
		printf("Found the element 25\n");
	}
	else 
	{
		printf("Didn't Found the element 12\n");
	}
	return 0;
}