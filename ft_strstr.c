/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 18:12:50 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/13 18:20:37 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			if (little[j + 1] == 0)
				return (big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
