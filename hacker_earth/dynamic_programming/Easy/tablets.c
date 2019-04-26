/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tablets.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 01:04:18 by maparmar          #+#    #+#             */
/*   Updated: 2019/04/26 01:04:39 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main(){
	int num, sum = 0;
	scanf("%d", &num);
	int arr[num],temp[num];
	int i;
	for (i = 0; i < num; i++)
	{
	  scanf("%d", &arr[i]);
	  temp[i] = 1;
	}
	for(i = 1; i < num; i++)
	{
	    if(arr[i] > arr[i - 1])
	    {
	        temp[i] = temp[i - 1] + 1;
	    }
	}
	for(i = num -2; i >= 0; i--)
	{
	    if(arr[i] > arr[i + 1] && temp[i] <= temp[i+1])
	    {
	        temp[i] = temp[i + 1] + 1;
	    }
	}
	for(i = 0; i < num; i++)
	{
	    sum += temp[i];
	}
	printf("%d", sum);
	return 0;
}
