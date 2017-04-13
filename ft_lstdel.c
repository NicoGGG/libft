/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 21:51:35 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/13 22:00:33 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	size_t size;

	tmp = *alst;
	size = tmp->content_size;
	del(tmp->content, size);
	free(tmp);
	if (tmp->next)
	{
		tmp = tmp->next;
		ft_lstdel(&tmp, del);
	}
	*alst = NULL;
}
