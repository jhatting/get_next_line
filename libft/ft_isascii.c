/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:17:58 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 12:18:20 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The ft_isascii() function tests for an ASCII character,
**which is any character between 0 and decimal 127 inclusive.
*/

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
