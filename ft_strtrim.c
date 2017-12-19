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
	int		hold_i;
	char	*new;

	if (s == NULL)
     	return (NULL);
  	i = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	i = ft_strlen(s) - 1;
	if (s[0] == '\0')
		return (ft_strnew(0));
	while (!s[i] || s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
  	i = i + 1;
	new = ft_strnew(i);
	if (new == NULL)
		return (NULL);
	hold_i = i;
	i = 0;
	while (i < hold_i)
	{
		new[i] = s[i];
		i++;
	}
	return (new);
}
