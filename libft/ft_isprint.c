/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:40:16 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 12:40:21 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The isprint() function checks whether a
**character is a printable character  or not.
**Those characters that occupies printing space
**are known as printable characters.
*/

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}
