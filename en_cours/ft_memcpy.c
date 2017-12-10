/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 19:31:01 by julie             #+#    #+#             */
/*   Updated: 2017/12/10 03:10:43 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ucdst;
	const unsigned char	*ucsrc;
	size_t				index;

	ucdst = (unsigned char*)dst;
	ucsrc = (unsigned char*)src;
	index = 0;
	while (index < n)
	{
		ucdst[index] = ucsrc[index];
		index++;
	}
	return (dst);
}
