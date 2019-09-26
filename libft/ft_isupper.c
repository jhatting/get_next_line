/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samhatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:36:44 by samhatti          #+#    #+#             */
/*   Updated: 2019/09/10 16:38:38 by samhatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**checks whether the passed character is uppercase letter.
*/

int		ft_isupper(int c)
{
	return (c >= 65 && c <= 90);
}
