/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 21:38:40 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/03 21:40:54 by julie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ucs;
	unsigned char		ucc;
	size_t				index;

	ucs = (const unsigned char)s;
	ucc = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		if (ucs[index] == ucc)
		{
			s = s + index;
			return (s);
		}
		index++
	}
	return (NULL);
}
