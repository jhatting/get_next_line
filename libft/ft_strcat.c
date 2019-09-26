/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:25:16 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 14:25:21 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The strcat() function is used for string interconnection
**with specified string at the end of another specified string.
**This function takes two pointers as arguments and returns the pointer
**to the destination string after concatenation.
**Str1 - pointer to the destination string.
**Str2 - pointer to the source string which is appended
**to the destination string.
*/

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}
