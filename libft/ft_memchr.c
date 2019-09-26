/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:50:09 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 12:50:14 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The ft_memchr() function locates the first occurence of c
**(converted to an unsigned char) in string s. Returns a pointer to
**the byte located, or NULL if no such byte exists within n bytes.)
*/

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*bee;

	i = 0;
	bee = (unsigned char *)b;
	while (i < len)
	{
		if (bee[i] == (unsigned char)c)
			return ((void *)(b + i));
		i++;
	}
	return (NULL);
}
