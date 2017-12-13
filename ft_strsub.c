/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 02:10:50 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/10 03:26:11 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	uilen;
	unsigned int	i;
	char			*carray;

	i = 0;
	if (s == NULL)
		return (NULL);
	carray = (char *)malloc(len);
	if (carray == NULL)
		return (NULL);
	uilen = (unsigned int)len;
	while (start < uilen)
	{
		carray[i] = s[start + i];
		i++;
	}
	carray[i] = '\0';
	return (carray);
}
