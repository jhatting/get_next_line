/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samhatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:41:36 by samhatti          #+#    #+#             */
/*   Updated: 2019/09/13 20:54:40 by samhatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies n bytes from memory area src to memory area dst.
** If dst and src overlap, behavior is undefined.
*/

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	char		*tmp_d;
	char const	*tmp_s;
	int			index;

	if (dst == src)
		return (dst);
	index = 0;
	tmp_d = (char *)dst;
	tmp_s = (char const *)src;
	while (n)
	{
		tmp_d[index] = tmp_s[index];
		n--;
		index++;
	}
	return (dst);
}
