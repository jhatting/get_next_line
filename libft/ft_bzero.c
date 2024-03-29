/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 11:41:20 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 11:41:38 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Write zeros to a byte string, using memset which is used to
**fill memory with a particular value.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
