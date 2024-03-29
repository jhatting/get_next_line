/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:36:48 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 12:36:55 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**used to check if the passe character is a
**digit or not. It returns a non-zero value
**if it’s a digit else it returns 0. For example
**, it returns a non-zero for ‘0’ to ‘9’ and
**zero for others.
*/

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
