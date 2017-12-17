/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <jmurte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 21:44:59 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/10 03:15:06 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	chrc;
	char	*s;
	char		chr_null;
	int		i;

	chrc = (char)c;
	s = (char *)str;
	chr_null = '\0';
	i = 0;
	if (c == '\0')
	{
		chr_null = ft_strlen(str);
		s = s + chr_null;
		return ((char *)s);
	}
	while (*s != '\0' || *s != chrc)
		i++;
	if (*s == chrc)
		return ((char *)(s + i));
	return (NULL);
}
