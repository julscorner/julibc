/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 02:22:22 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/19 15:14:04 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		recursive_putnbr_fd(int nb, int fd)
{
	if (nb > 9 || nb < -9)
		recursive_putnbr_fd(nb / 10, fd);
	if (nb < 0)
		ft_putchar_fd(-(nb % 10) + '0', fd);
	else
		ft_putchar_fd(nb % 10 + '0', fd);
}

void			ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
		ft_putchar_fd('-', fd);
	recursive_putnbr_fd(nb, fd);
}
