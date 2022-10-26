/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <irulusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:39:48 by irulusoy          #+#    #+#             */
/*   Updated: 2022/10/16 12:07:13 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	to_free(t_array *array)
{
	free (array->a);
	free (array->b);
	exit (1);
}

int	check(t_array *array)
{
	if (!input_check(array))
		return (0);
	if (!check_difference(array))
		return (0);
	if (!if_null(array))
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	t_array	*array;

	if (argc > 1)
	{
		array = &((t_array){0});
		array->argc = argc;
		array->argv = argv;
		array->a_len = size_of_arr(array);
		if (!check(array))
		{
			free (array->temp_array_int);
			exit (1);
		}
		ft_arr_allocate(array);
		assign_a(array);
		free(array->temp_array_int);
		if (!is_sorted(array))
			to_free(array);
		ft_indexing(array, copy_array_a(array));
		if (array->a_len <= 5)
			ft_mini_sort(array);
		else
			now_radix(array);
	}
}
