/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:37:33 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 14:37:37 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The function ft_strnew() allocates with malloc(3) and returns a fresh
**string ending with '\0'. Each character of the string is initialized
**at '\0'. If the allocation fails, the function returns NULL.
*/

char	*ft_strnew(size_t size)
{
	char	*str;
	char	*p;

	str = (char*)malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	p = str;
	while (size)
	{
		*p++ = '\0';
		size--;
	}
	*p = '\0';
	return (str);
}
