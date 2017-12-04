/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <jmurte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 21:44:10 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/01 21:45:56 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* similar to strchr but instead of pointing to the first occurrence it points to the last one
*/

char	*ft_strrchr(char *str, int c)
{
	char chrc;
	int len;
	
	chrc = (char)c;
	len = ft_strlen(str);
	if (chrc == '\0')
		return (str = str + len);
	len = len - 1;
	while (len > 0 || str[len] != chrc)
		len--;
	if (str[len] == chrc)
		return (str = str + len);
	if (len == 0 && str[len] != chrc)
		return (NULL);
}
