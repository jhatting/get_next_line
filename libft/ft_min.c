/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:53:25 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 12:53:32 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Custom function I added.
**Parameters: two size_t numbers
**Side effect: none (compares the two unsigned numbers)
**Return value: the smaller of a and b, b if they are equal
*/

size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
