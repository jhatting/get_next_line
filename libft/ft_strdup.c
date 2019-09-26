/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:28:34 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 14:28:39 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**is used to duplicate a string. It returns a pointer
**to null-terminated byte string
*/

char	*ft_strdup(const char *s1)
{
	char	*newstr;

	newstr = ((char *)malloc(sizeof(char) * (ft_strlen(s1) + 1)));
	if (newstr)
		return (ft_strcpy(newstr, s1));
	return (NULL);
}
