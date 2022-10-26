/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <irulusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:40:42 by irulusoy          #+#    #+#             */
/*   Updated: 2022/10/15 17:43:09 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "new_libft.h"

static unsigned int	ft_len(char *s)
{
	unsigned int	i;

	i = 0;
	while (s && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*dest;
	unsigned int	s1_len;
	unsigned int	s2_len;
	unsigned int	i;

	s1_len = ft_len((char *)s1);
	s2_len = ft_len((char *)s2);
	dest = (char *)malloc(sizeof(char) * (s1_len + s2_len + 2));
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		*(dest + i) = *((char *)s1 + i);
		i++;
	}
	dest[i] = ' ';
	i = 0;
	while (s2 && s2[i] != '\0')
	{
		*(dest + s1_len + 1 + i) = *((char *)s2 + i);
		i++;
	}
	*(dest + s1_len + i + 1) = '\0';
	return (dest);
}
