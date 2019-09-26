/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:32:55 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 14:33:00 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The ft_strlcat() appends string src to the end of dst. It will append
**at most maxlen - strlen(dst) - 1 characters. It will then NUL-terminate,
**unless maxlen is 0 or the original dst string was longer than maxlen.
**maxlen should be the size of the destination string buffer dst plus the
**space for the nul-terminator. Returns the total length of the
**string it tried to create.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_min(size, ft_strlen((const char *)dst));
	src_len = ft_strlen(src);
	if (dst_len == size)
		return (size + src_len);
	if (src_len < size - dst_len)
		ft_strncat(dst, src, src_len + 1);
	else
	{
		ft_strncat(dst, src, size - dst_len - 1);
		dst[size - 1] = '\0';
	}
	return (dst_len + src_len);
}
