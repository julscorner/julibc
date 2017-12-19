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
	int		i;

	chrc = (char)c;
	s = (char *)str;
	i = 0;
	while (s[i] != '\0' || s[i] != chrc)
		i++;
	if (s[i] == chrc)
		return ((char *)(s + i));
	return (NULL);
}
