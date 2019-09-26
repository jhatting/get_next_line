/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:38:28 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 14:38:34 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The ft_strrchr() function locates the last occurrence of c
**(converted to a char) in the string pointed to by s. The terminating
**null character is considered to be part of the string; therefore if
**c is '\0', the functions locate the terminating '\0'. Returns a
**pointer to the located character, or NULL if the character does
**not appear in the string.
*/

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	while (s[i] != c && i >= 0)
		i--;
	if (i < 0)
		return (NULL);
	return ((char *)(s + i));
}
