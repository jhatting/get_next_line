/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:45:25 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 12:45:31 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The ft_lstadd() function adds the element new at the beginning
**of the list alst.
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (new == NULL || alst == NULL)
		return ;
	new->next = *alst;
	*alst = new;
}
