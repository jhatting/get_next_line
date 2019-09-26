/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:33:52 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 14:34:07 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The function ft_strmap() applies the function f to each character of the
**string given as an argument to create a "fresh" new string (with malloc(3))
**resulting from the successive applications of f.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		i;

	if (s == NULL || f == NULL || !(new = (char *)malloc(sizeof(char) \
	* (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
