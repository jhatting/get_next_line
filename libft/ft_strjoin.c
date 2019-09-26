/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:32:18 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 14:32:23 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The ft_strjoin() function allocates (with malloc(3)) and returns a
**"fresh" string that is the concatenation of s1 and s2, ending with '\0'.
**If the allocation fails, the function returns NULL.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	if ((s1 != NULL && s2 != NULL) && \
	(str = (char *)malloc(sizeof(char) * (1 + ft_strlen(s1) + ft_strlen(s2)))))
	{
		i = 0;
		while (*s1)
		{
			str[i] = *s1;
			i++;
			s1++;
		}
		while (*s2)
		{
			str[i] = *s2;
			i++;
			s2++;
		}
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}
