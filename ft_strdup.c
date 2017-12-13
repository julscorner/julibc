/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 01:19:16 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/10 03:13:26 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	len = 0;
	len = ft_strlen(s1);
	str = (char *)malloc(sizeof(*s1) * (len + 1));
	if (str == 0)
		return (NULL);
	ft_strcpy(str, s1);
	return (str);
}
