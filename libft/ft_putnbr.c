/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:22:35 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 14:22:51 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Coding of non-standard function putnbr().
** Parameters: an integer
** Side effect: prints the number put into standard out using only write(2) as
** a standard helper function
** Return value: none
*/

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			n = n * -1;
			ft_putchar('-');
		}
		if (n >= 10)
			ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
}
