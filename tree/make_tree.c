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

typedef struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
} t_list;

t_list *ft_new_node(int value)
{
	t_list *new;
	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return NULL;
	new->data = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}

int ft_search_index(int start, int end, int inf[], int ele)
{
	while (start <= end)
	{
		if (inf[start] == ele)
			return start;
		start++;
	}
	return (0);

}

t_list *ft_tree_maker(int inf[], int pre[], int start, int end)
{
	static int pre_index = 0;
	if (start > end)
		return NULL;
	t_list *t_node = ft_new_node(pre[pre_index++]);
	if (start == end)
		return t_node;
	int inf_index = ft_search_index(start, end, inf, t_node->data);
	t_node->left = ft_tree_maker(inf, pre, start, inf_index -1);
	t_node->right = ft_tree_maker(inf, pre, inf_index + 1, end);

	return t_node;
}

void print_post_fix(t_list *t)
{
	if (t == NULL)
		return ;
	print_post_fix(t->left);
	print_post_fix(t->right);
	printf("%d \n", t->data);
}

int main (void)
{
	int inf[] = {4, 2, 5, 1, 6, 3};
	int pre[] = {1, 2, 4, 5, 3, 6};
	int len = sizeof(inf) / sizeof(inf[0]);
	t_list *tree = ft_tree_maker(inf, pre, 0, len - 1);
	print_post_fix(tree);
	return 0;
}
