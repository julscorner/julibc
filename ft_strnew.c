/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 02:10:24 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/10 03:44:44 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*carray;
	size_t	csize;

	csize = size + 1;
	carray = (char *)ft_memalloc(csize);
	if (!carray)
		return (NULL);
	return (carray);
}
