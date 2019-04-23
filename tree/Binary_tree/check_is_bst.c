/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_bst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <maparmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 22:56:59 by maparmar          #+#    #+#             */
/*   Updated: 2019/04/22 23:24:26 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bst.h"

// The second method is to find the infix order of B tree and see is the sequence is sorted or not. -> for a good B tree the sequence should be sorted.

int check_is_bst(t_bst *root, int min_value, int max_value) // minimize the range and the max and min value should be shorter each iteration 
{
    if (root == NULL) return 1; // Termination condition.
    return (root->value > min_value && root->value < max_value 
        && check_is_bst(root->left, min_value, root->value) 
        && check_is_bst(root->right, root->value, max_value)) ? 1 : 0;
}

int check_bst(t_bst *root)
{
    return check_is_bst(root, (~0u >> 1) + 1, ~0u >> 1); // ~0u >> 1 -> INT_MAX && (~0u >> 1) + 1 -> INT_MIN
}

