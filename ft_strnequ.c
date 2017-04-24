/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 19:50:17 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/24 20:39:23 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (*s1 == 0 || n == 0)
		return (1);
	else if (*s1 != *s2)
		return (0);
	else
		return (ft_strnequ(s1 + 1, s2 + 1, n - 1));
}
