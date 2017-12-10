/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 03:27:38 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/10 03:30:17 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	int		i;
	int		j;
	char	*new;

	if (!s)
		return (NULL);
	i = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	i = ft_strlen(s) - 1;
	if (i == -1)
		return (ft_strnew(0));
	while (!s[i] || s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	new = ft_strnew(++i);
	if (!new)
		return (NULL);
	j = i;
	i = 0;
	while (i < j)
	{
		new[i] = s[i];
		i++;
	}
	return (new);
}
