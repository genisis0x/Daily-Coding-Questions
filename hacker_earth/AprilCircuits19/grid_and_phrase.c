/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_and_phrase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <maparmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 23:59:31 by maparmar          #+#    #+#             */
/*   Updated: 2019/04/30 00:12:24 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>



int gr_ph(char **s)
{
    int c = 0;

    return c;
}


int main()
{
    int row, col;
    scanf("%d", &row);
    scanf("%d", &col);
    char s[row];
    char **str = (char **)malloc(sizeof(char) * (row + 1));
    int i;
    for(i = 0; i < row; i++)
    {
        str[i] = (char *)malloc(sizeof(char) * col);
        scanf("%s", s);
        str[i] = s;
    }
    str[i] = NULL;
    printf("%d", gr_ph(str));
    return 0;
}