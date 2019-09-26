/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:50:46 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 12:50:50 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The ft_memcmp() function compares byte string s1 against byte string s2.
**Both strings are assumed to be n bytes long. Returns 0 if the first
**two strings are identical, otherwise returns the difference between
**the first two bytes (treated as unsigned char values).
**Zero-length strings are always identical.
*/

int		ft_memcmp(const void *b1, const void *b2, size_t len)
{
	size_t			i;
	unsigned char	*a1;
	unsigned char	*a2;

	if (len == 0)
		return (0);
	i = 0;
	a1 = (unsigned char *)b1;
	a2 = (unsigned char *)b2;
	while (i + 1 < len && a1[i] == a2[i])
		i++;
	return (a1[i] - a2[i]);
}
