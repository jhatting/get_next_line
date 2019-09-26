/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:37:15 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 12:38:42 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The islower() function tests for any lower-case letters.  The value of the
** argument must be representable as an unsigned char or the value of EOF.
*/

int	ft_islower(int c)
{
	return (c >= 97 && c <= 122);
}
