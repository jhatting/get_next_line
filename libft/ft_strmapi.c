/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:34:31 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 14:34:36 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Applies the function f to each character of the string passed
**as argument by giving its index as first argument to create a
**“fresh” new string (with malloc(3)) resulting from the successive
**applications of f.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	if (s == NULL || f == NULL || !(new = (char *)malloc(sizeof(char) \
	* (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
