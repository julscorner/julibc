/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <jmurte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 21:44:10 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/10 03:15:48 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	char	chrc;
	int		len;

	s = (char *)str;
	chrc = (char)c;
	len = ft_strlen(str);
	if (chrc == '\0')
		return (s = s + len);
	len = len - 1;
	while (len > 0 || str[len] != chrc)
		--len;
	if (str[len] == chrc)
		return ((char *)s = s + len);
//	else if (len == 0 && str[len] != chrc)
	return (NULL);
}
