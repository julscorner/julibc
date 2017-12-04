/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 10:02:19 by julie             #+#    #+#             */
/*   Updated: 2017/12/02 10:06:17 by julie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			index;
	unsigned char	*ucptr;
	unsigned char	ucc;

	index = 0;
	ucc = (unsigned char *)c;
	ptr = (unsigned char *)b;
	while (index < len)
	{
		ptr[index] = ucc;
		index++;
	}
	return (b);
}
