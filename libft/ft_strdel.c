/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:27:51 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 14:27:57 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The ft_strdel() function takes as a parameter the address of a
**string that needs to be freed with free(3), then sets its
**pointer to NULL.
*/

void	ft_strdel(char **as)
{
	if (as == NULL)
		return ;
	free(*as);
	*as = NULL;
}
