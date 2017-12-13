/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 19:53:20 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/10 03:10:54 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*ucdst;
	const unsigned char	*ucsrc;
	unsigned char		ucc;
	size_t				index;

	ucdst = (unsigned char*)dst;
	ucsrc = (const unsigned char*)src;
	ucc = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		ucdst[index] = ucsrc[index];
		index++;
		if (ucsrc[index - 1] == ucc)
		{
			dst = dst + index;
			return (dst);
		}
	}
	return (NULL);
}
