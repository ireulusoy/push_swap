/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deeper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <irulusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:37:45 by irulusoy          #+#    #+#             */
/*   Updated: 2022/10/10 19:05:37 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_the_max(t_array *array)
{
	int	max;
	int	i;

	i = 0;
	max = array->a[1];
	while (++i < array->a_len)
		if (array->a[i] > max)
			max = array->a[i];
	return (max);
}

void	bit_count(t_array *array)
{
	int	max;

	max = get_the_max(array);
	while (max)
	{
		max = max >> 1;
		array->bit_count++;
	}
}

void	now_radix(t_array *array)
{
	int	tr_bit;
	int	tr_arg;
	int	stable_len_a;

	bit_count(array);
	stable_len_a = array->a_len;
	tr_bit = -1;
	while (++tr_bit < array->bit_count)
	{
		tr_arg = -1;
		while (++tr_arg < stable_len_a)
		{
			if ((array->a[0] >> tr_bit) & 1)
				ra(array);
			else
				pb(array);
		}
		while (array->b_len)
			pa(array);
	}
	free (array->b);
}
