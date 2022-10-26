/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_libft.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <irulusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:45:46 by irulusoy          #+#    #+#             */
/*   Updated: 2022/10/15 18:13:19 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEW_LIBFT_H
# define NEW_LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h> 
//# include "/Users/irulusoy/Desktop/push_swap/ft_printf/ft_printf.h"

size_t			ft_strlen(const char *str);
char			*ft_strdup(const char *str);
unsigned int	ft_strlcpy(char *dest, const char *src, size_t size);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			**ft_split(char const *s, char c);
char			*ft_strjoin(char const *s1, char const *s2);
int				ft_atoi(const char *str);
void			res(long result);
void			ft_putstr_fd(char *s, int fd);
void			ft_putchar_fd(char c, int fd);

#endif
