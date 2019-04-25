/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 17:01:24 by maparmar          #+#    #+#             */
/*   Updated: 2019/04/24 17:01:27 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *spiralOrder(const int **A, int n11, int n12, int *len1)
{
    int dir = 0;
    int *res = (int *)malloc(sizeof(int) * (n11 * n12));
    int T = 0;       // ROW
    int B = n11 - 1; // ROW;
    int L = 0;       //COL
    int R = n12 - 1; // COL;
    int k = 0;
    int i = 0;
    *len1 = n11 * n12;
    while (T <= B && L <= R)
    {
        if (dir == 0) // Right
        {
            for (i = L; i <= R; i++, k++)
            {
                res[k] = A[T][i];
            }
            T++;
        }
        else if (dir == 1) // Down
        {
            for (i = T; i <= B; i++, k++)
            {
                res[k] = A[i][R];
            }
            R--;
        }
        else if (dir == 2) // Left
        {
            for (i = R; i >= L; i--, k++)
            {
                res[k] = A[B][i];
            }
            B--;
        }
        else if (dir == 3) // TOP
        {
            for (i = B; i >= T; i--, k++)
            {
                res[k] = A[i][L];
            }
            L++;
        }
        dir = ((dir + 1) % 4);
    }
    return res;
}
