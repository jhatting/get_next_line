/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:41:42 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 12:41:47 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**used to check if the argument contains any
**white-space characters.
**There are many types of whitespace characters
**‘ ‘ -space
**‘\t’ - horizontal tab
**‘\n’- newline
**‘\v’- vertical tab
**‘\f’- Feed
**‘\r’- Carriage return
*/

int		ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || \
		c == '\r')
		return (1);
	return (0);
}
