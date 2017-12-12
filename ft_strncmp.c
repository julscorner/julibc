/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 02:11:07 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/10 03:18:27 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ucs1;
	unsigned char	*ucs2;
	size_t			i;

	ucs1 = (unsigned char*)s1;
	ucs2 = (unsigned char*)s2;
	i = 0;
	while (s1[i] && (ucs1[i] == ucs2[i]) && i < n)
		i++;
	if (i == n)
		return (0);
	return (ucs1[i] - ucs2[i]);
}
