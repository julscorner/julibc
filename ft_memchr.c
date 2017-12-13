/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 21:38:40 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/10 03:46:38 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ucs;
	unsigned char		ucc;
	size_t				index;

	ucs = (const unsigned char *)s;
	ucc = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		if (ucs[index] == ucc)
		{
			s = s + index;
			return ((void *)s);
		}
		index++;
	}
	return (NULL);
}
