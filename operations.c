/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <irulusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:42:21 by irulusoy          #+#    #+#             */
/*   Updated: 2022/10/15 20:29:10 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_array *array)
{
	int	i;

	if (array->b_len > 0)
	{
		i = array->a_len;
		while (i > 0)
		{
			array->a[i] = array->a[i - 1];
			i--;
		}
		array->a[0] = array->b[0];
		array->a_len += 1;
		array->b_len -= 1;
		i = 0;
		while (i < array->b_len)
		{
			array->b[i] = array->b[i + 1];
			i++;
		}
		ft_putstr_fd("pa\n", 1);
	}
}

void	pb(t_array *array)
{
	int	i;

	if (array->a_len > 0)
	{
		i = array->b_len;
		while (i > 0)
		{
			array->b[i] = array->b[i - 1];
			i--;
		}
		array->b[0] = array->a[0];
		array->b_len += 1;
		array->a_len -= 1;
		i = 0;
		while (i < array->a_len)
		{
			array->a[i] = array->a[i + 1];
			i++;
		}
		ft_putstr_fd("pb\n", 1);
	}
}

void	ra(t_array *array)
{
	int	i;
	int	temp;

	if (array->a_len > 1)
	{
		temp = array->a[0];
		i = 0;
		while (i < array->a_len - 1)
		{
			array->a[i] = array->a[i + 1];
			i++;
		}
		array->a[i] = temp;
		ft_putstr_fd("ra\n", 1);
	}
}

void	rra(t_array *array)
{
	int	i;
	int	temp;

	if (array->a_len > 1)
	{
		temp = array->a[array->a_len - 1];
		i = array->a_len - 1;
		while (i > 0)
		{
			array->a[i] = array->a[i - 1];
			i--;
		}
		array->a[i] = temp;
		ft_putstr_fd("rra\n", 1);
	}
}

void	sa(t_array *array)
{
	int	swap;

	if (array->a_len > 1)
	{
		swap = array->a[0];
		array->a[0] = array->a[1];
		array->a[1] = swap;
		ft_putstr_fd("sa\n", 1);
	}
}
