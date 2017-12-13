/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 10:02:19 by julie             #+#    #+#             */
/*   Updated: 2017/12/10 03:10:17 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			index;
	unsigned char	*ucptr;
	unsigned char	ucc;

	index = 0;
	ucc = (unsigned char)c;
	ucptr = (unsigned char *)b;
	while (index < len)
	{
		ucptr[index] = ucc;
		index++;
	}
	return (b);
}
