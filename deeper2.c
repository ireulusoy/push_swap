/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deeper2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <irulusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:34:57 by irulusoy          #+#    #+#             */
/*   Updated: 2022/10/22 13:51:27 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_indexing(t_array *array, int *sorted_arr)
{
	int	i;
	int	j;

	i = 0;
	while (i < array->a_len)
	{
		j = 0;
		while (j < array->a_len)
		{
			if (array->a[i] == sorted_arr[j])
			{
				array->a[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	free(sorted_arr);
}

void	ft_mini_sort(t_array *array)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		while (array->a[0] != i)
		{
			if (ft_sorted_or_not_bool(array))
				break ;
			ft_mini_two(array);
			if (array->a[0] != i)
				rra(array);
		}
		if (ft_sorted_or_not_bool(array))
			break ;
		pb(array);
		i++;
	}
	ft_mini_two(array);
	while (array->b_len)
		pa(array);
}

void	ft_mini_two(t_array *array)
{
	if (array->a[0] > array->a[1])
		sa(array);
}

int	ft_sorted_or_not_bool(t_array *array)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	while (i < array->a_len - 1 && result)
	{
		if (array->a[i] > array->a[i + 1])
			result = 0;
		i++;
	}
	return (result);
}
