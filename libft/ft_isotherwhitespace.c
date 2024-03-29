/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isotherwhitespace.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:39:36 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 12:39:47 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**used to check if the argument contains specific
**white-space characters.
**‘\v’- vertical tab
**‘\f’- Feed
**‘\r’- Carriage return
*/

int		ft_isotherwhitespace(char c)
{
	return (c == '\v' || c == '\f' || c == '\r');
}
