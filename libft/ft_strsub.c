/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:42:08 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 14:42:15 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The ft_strsub() function allocates with malloc(3) and returns a "fresh"
**substring from string given as an argument. The substring begins
**at index start and is of size len. If start and len aren't referring
**to a valid substring, the behavior is undefined. If the
**allocation fails, the function returns NULL.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if ((str = (char *)malloc(sizeof(char) * (len + 1))))
	{
		i = 0;
		while (i < len)
		{
			str[i] = s[start + i];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}
