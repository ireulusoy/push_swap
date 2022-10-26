/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <irulusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:57:29 by irulusoy          #+#    #+#             */
/*   Updated: 2022/10/16 12:24:25 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./new_libft/new_libft.h"
# include "./ft_printf/ft_printf.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h> 

typedef struct s_array
{
	int		*a;
	int		*b;
	char	**argv;
	int		argc;
	int		a_len;
	int		b_len;
	int		bit_count;
	char	*temp_array;
	char	**temp_array_two_d;
	int		*temp_array_int;
}	t_array;

int		check_sign(t_array *array, int i, int j);
int		check_digit(t_array *array, int i, int j);
int		input_check(t_array *array);
int		check_difference(t_array *array);
int		if_null(t_array *array);
int		between_range(int *arr, t_array *array);
int		if_empty(t_array *array, int i, int j);

char	*lets_join(t_array *array);
char	**lets_split(t_array *array);
void	now_atoi(t_array *array);
int		size_of_arr(t_array *array);

void	bubble_sort(t_array *array, int *arr);
int		*copy_array_a(t_array *array);
void	ft_mini_sort(t_array *array);
void	ft_mini_two(t_array *array);
int		ft_sorted_or_not_bool(t_array *array);

void	assign_a(t_array *array);
void	ft_arr_allocate(t_array *array);
int		is_sorted(t_array *array);
void	lets_start_to_sort(t_array *array);

int		get_the_max(t_array *array);
void	bit_count(t_array *array);
void	now_radix(t_array *array);

void	pa(t_array *array);
void	pb(t_array *array);
void	ra(t_array *array);
void	rra(t_array *array);
void	sa(t_array *array);
void	ft_indexing(t_array *array, int *sorted_arr);
int		check(t_array *array);
void	to_free(t_array *array);

#endif
