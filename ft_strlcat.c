/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 17:29:22 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/13 17:53:58 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static size_t	ft_catlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ret;

	j = ft_catlen(dst);
	i = 0;
	if (size > ft_catlen(src))
		ret = j + ft_catlen(src);
	else
		ret = size;
	while (src[i] && j < size)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	return (ret);
}
