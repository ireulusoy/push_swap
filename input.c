/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <irulusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:38:51 by irulusoy          #+#    #+#             */
/*   Updated: 2022/10/15 18:11:49 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	if_null(t_array *array)
{
	int	i;

	i = 0;
	while (array->argv[i] != 0)
	{
		if (array->argv[i][0] == '\0')
		{
			ft_putstr_fd("Error\nNull value is not allowed", 2);
			return (0);
		}
		i++;
	}
	return (1);
}

int	if_empty(t_array *array, int i, int j)
{
	if (array->argv[i][j] == ' ')
	{
		ft_putstr_fd("Error\nYou cannot have empty input", 2);
		return (0);
	}
	return (1);
}

int	check_difference(t_array *array)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	now_atoi(array);
	while (i < size_of_arr(array))
	{
		while (j < size_of_arr(array))
		{
			if (array->temp_array_int[i] == array->temp_array_int[j])
			{
				ft_putstr_fd("Error\nSame numbers are not allowed!", 2);
				return (0);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	check_sign(t_array *array, int i, int j)
{
	char	k;

	j++;
	k = '0';
	if (array->argv[i][j] == '\0')
	{
		ft_putstr_fd("Error\nsign cannot be at the end\n", 2);
		return (0);
	}
	if (array->argv[i][j] == '-' || array->argv[i][j] == '+')
	{
		ft_putstr_fd("Error\nthere cannot be consecutive signs\n", 2);
		return (0);
	}
	j -= 2;
	while (k <= '9')
	{
		if (array->argv[i][j] == k)
		{
			ft_putstr_fd("Error\nsign connot be between the numbers", 2);
			return (0);
		}
		k++;
	}
	return (1);
}

int	check_digit(t_array *array, int i, int j)
{
	char	k;

	k = 0;
	while (k <= '9')
	{
		if (array->argv[i][j] == k)
			return (1);
		k++;
	}
	ft_putstr_fd("Error\nOther than digit is now allowed.", 2);
	return (0);
}
