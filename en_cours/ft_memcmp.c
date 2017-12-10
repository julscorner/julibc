/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 22:35:09 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/10 03:13:03 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ucs1;
	const unsigned char	*ucs2;
	size_t				index;

	ucs1 = (const unsigned char*)s1;
	ucs2 = (const unsigned char*)s2;
	index = 0;
	if (n == 0 || ((ucs1 == '\0') && (ucs1 == ucs2)))
		return (0);
	while (index < n)
	{
		if (ucs1[index] != ucs2[index])
			return (ucs1[index] - ucs2[index]);
		index++;
	}
	return (0);
}
