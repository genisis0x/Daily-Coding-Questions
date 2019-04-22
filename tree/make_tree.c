/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_tree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 19:37:28 by maparmar          #+#    #+#             */
/*   Updated: 2019/03/17 20:25:53 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct tree // struct of a node.
{
	int data;
	struct tree *left;
	struct tree *right;
} t_list;

t_list *ft_new_node(int value) // function to create a new node
{
	t_list *new;
	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return NULL;
	new->data = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}

int ft_search_index(int start, int end, int inf[], int ele) // will give the index of infix expression
{
	while (start <= end)
	{
		if (inf[start] == ele)
			return start;
		start++;
	}
	return (0);

}

t_list *ft_tree_maker(int inf[], int pre[], int start, int end) // will make the tree recursively 
{
	static int pre_index = 0; // initilize this prefix index to static because it should be itilized only once.
	if (start > end)
		return NULL;
	t_list *t_node = ft_new_node(pre[pre_index++]); // create the new node
	if (start == end)
		return t_node;
	int inf_index = ft_search_index(start, end, inf, t_node->data); 
	t_node->left = ft_tree_maker(inf, pre, start, inf_index -1); // BFS for the left node by reducing the end point to left of infix index
	t_node->right = ft_tree_maker(inf, pre, inf_index + 1, end); // BFS for the right node by reducing the start point to right of infix index

	return t_node; // return the node 
}

void print_post_fix(t_list *t) // printing the postfix expresion
{
	if (t == NULL)
		return ;
	print_post_fix(t->left);
	print_post_fix(t->right);
	printf("%d \n", t->data);
}

int main (void) // main driver
{
	int inf[] = {4, 2, 5, 1, 6, 3};
	int pre[] = {1, 2, 4, 5, 3, 6};
	int len = sizeof(inf) / sizeof(inf[0]);
	t_list *tree = ft_tree_maker(inf, pre, 0, len - 1);
	print_post_fix(tree);
	return 0;
}
