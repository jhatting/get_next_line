/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:45:52 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 12:46:42 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Takes as a parameter the adress of a pointer to
**a link and frees the memory of this link and
**every successors of that link using the function
**del and free(3). Finally the pointer to
**the link that was just freed must be set to
**NULL (quite similar to the function ft_memdel)
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;

	while (*alst)
	{
		next = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = next;
	}
}
