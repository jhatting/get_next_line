/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:36:23 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 14:36:30 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The ft_strncpy() function copies at most len characters from s
**c into dst. If src is less than len characters long, the
**remainder of dst is filled with '\0' characters.
*/

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (i < len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
