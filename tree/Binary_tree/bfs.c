/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bfs.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <maparmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 23:30:18 by maparmar          #+#    #+#             */
/*   Updated: 2019/04/18 23:33:57 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct BFS_NODE
{
    int value;
    struct BFS_NODE *left;
    struct BFS_NODE *right;
} bfs_node;

bfs_node *root = NULL;




void breath_first_search(bfs_node **root)
{
    if (!*root) return ;
    else
    {
        
    }
    
}
