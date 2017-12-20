/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 02:13:04 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/19 16:10:07 by jmurte           ###   ########.fr       */
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
	s_fresh = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s_fresh == NULL)
		return (NULL);
	ft_strcpy(s_fresh, s);
	while (s[i])
	{
		s_fresh[i] = f(s[i]);
		i++;
	}
	s_fresh[i] = '\0';
	return (s_fresh);
}
