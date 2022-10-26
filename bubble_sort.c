/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <irulusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:37:36 by irulusoy          #+#    #+#             */
/*   Updated: 2022/10/10 19:41:13 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(t_array *array, int *arr)
{
	int	j;
	int	i;
	int	temp;

	j = 0;
	i = 0;
	temp = 0;
	while (j < array->a_len)
	{
		while ((i + 1) < array->a_len)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
			}
			i++;
		}
		i = 0;
		j++;
	}
}

int	*copy_array_a(t_array *array)
{
	int	*bubble_sorted_arr;
	int	i;

	i = 0;
	bubble_sorted_arr = malloc(array->a_len * sizeof(int));
	if (!bubble_sorted_arr)
	{
		free(array->a);
		free(array->b);
		exit (1);
	}
	while (i < array->a_len)
	{
		bubble_sorted_arr[i] = array->a[i];
		i++;
	}
	bubble_sort(array, bubble_sorted_arr);
	return (bubble_sorted_arr);
}
