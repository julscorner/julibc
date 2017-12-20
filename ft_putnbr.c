/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 02:34:53 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/19 15:20:22 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		recursive_putnbr(int nb)
{
	if (nb > 9 || nb < -9)
		recursive_putnbr(nb / 10);
	if (nb < 0)
		ft_putchar(-(nb % 10) + '0');
	else
		ft_putchar(nb % 10 + '0');
}

void			ft_putnbr(int nb)
{
	if (nb < 0)
		ft_putchar('-');
	recursive_putnbr(nb);
}
