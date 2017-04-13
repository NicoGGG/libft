/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 22:08:26 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/13 22:19:16 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*copy;

	if ((copy = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if ((copy->content = malloc(lst->content_size)) == NULL)
	{
		free(copy);
		return (NULL);
	}
	if (lst == NULL)
		return (NULL);
	else
	{
		copy = f(lst);
		copy->next = ft_lstmap(lst->next, f);
	}
	return (copy);
}
