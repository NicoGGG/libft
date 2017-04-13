/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 17:22:09 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/13 17:53:32 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	int len;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	while (i < n && s2[i])
	{
		s1[len] = s2[i];
		i++;
		len++;
	}
	s1[len] = 0;
	return (s1);
}
