/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 17:57:17 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/13 18:12:36 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	t;
	char	*tmp;

	t = (char )c;
	tmp = (char *)s;
	while (*tmp)
	{
		if (*tmp == t)
			return (tmp);
		else
			tmp++;
	}
	return (NULL);
}