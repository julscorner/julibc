/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 03:41:06 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/19 15:17:34 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*s_fresh;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	s_fresh = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s_fresh == NULL)
		return (NULL);
	while (s[i])
	{
		s_fresh[i] = f(i, s[i]);
		i++;
	}
	s_fresh[i] = '\0';
	return (s_fresh);
}
