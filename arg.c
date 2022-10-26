/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <irulusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:36:27 by irulusoy          #+#    #+#             */
/*   Updated: 2022/10/15 15:01:24 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	size_of_arr(t_array *array)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	lets_split(array);
	while (array->temp_array_two_d[i] != 0)
		i++;
	while (k < i)
	{
		free(array->temp_array_two_d[k]);
		k++;
	}
	free (array->temp_array_two_d);
	return (i);
}

char	*lets_join(t_array *array)
{
	int		i;
	char	*temp;

	array->temp_array = ft_strjoin(array->argv[1], array->argv[2]);
	i = 3;
	while (i < array->argc)
	{
		temp = array->temp_array;
		array->temp_array = ft_strjoin(array->temp_array, array->argv[i]);
		free(temp);
		i++;
	}
	return (array->temp_array);
}

char	**lets_split(t_array *array)
{
	array->temp_array_two_d = ft_split(lets_join(array), ' ');
	free (array->temp_array);
	return (array->temp_array_two_d);
}

void	now_atoi(t_array *array)
{
	char	**arr;
	int		i;
	int		k;

	i = -1;
	k = 0;
	array->temp_array_int = malloc(sizeof(int) * size_of_arr(array));
	arr = lets_split(array);
	while (arr[++i] != 0)
		array->temp_array_int[i] = ft_atoi(arr[i]);
	k = size_of_arr(array);
	i = 0;
	while (i < k)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int	input_check(t_array *array)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (i < array->argc)
	{
		while (array->argv[i][j] != '\0')
		{
			if (!if_empty(array, i, j))
				return (0);
			if (array->argv[i][j] == '-' || array->argv[i][j] == '+')
				if (!(check_sign(array, i, j)))
					return (0);
			if ((array->argv[i][j] != '-' && array->argv[i][j] != '+'))
				if (!check_digit(array, i, j))
					return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
