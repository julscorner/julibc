/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 02:10:50 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/18 23:48:49 by jmurte           ###   ########.fr       */
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
	carray = (char *)malloc(sizeof(char) * (len + 1));
	if (carray == NULL)
		return (NULL);
	uilen = (unsigned int)len;
	while (i < uilen)
	{
		carray[i] = s[start + i];
		i++;
	}
	carray[i] = '\0';
	return (carray);
}
