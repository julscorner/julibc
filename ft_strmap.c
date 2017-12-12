/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 02:13:04 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/10 03:25:07 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*s_fresh;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	s_fresh = ft_strnew(ft_strlen(s));
	if (s_fresh == NULL)
		return (NULL);
	ft_strcpy(s_fresh, s);
	while (s[i])
	{
		s_fresh[i] = f(s[i]);
		i++;
	}
	return (s_fresh);
}
