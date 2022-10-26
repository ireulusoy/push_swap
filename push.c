/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <irulusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:41:51 by irulusoy          #+#    #+#             */
/*   Updated: 2022/10/15 18:08:14 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_arr_allocate(t_array *array)
{
	array->a = malloc(array->a_len * sizeof(int));
	if (!array->a)
	{
		ft_putstr_fd("Error\n", 2);
		free (array->temp_array_int);
		exit(1);
	}
	array->b = malloc(array->a_len * sizeof(int));
	if (!array->b)
	{
		free(array->a);
		free (array->temp_array_int);
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
}

void	assign_a(t_array *array)
{
	int	i;

	i = 0;
	while (i < array->a_len)
	{
		array->a[i] = array->temp_array_int[i];
		i++;
	}
}

int	is_sorted(t_array *array)
{
	int	i;

	i = 1;
	while (i < array->a_len)
	{
		if (array->a[i] < array->a[i - 1])
			return (1);
		i++;
	}
	return (0);
}

/*
void	lets_start_to_sort(t_array array)
{
	//copy_array_a(array);

}*/