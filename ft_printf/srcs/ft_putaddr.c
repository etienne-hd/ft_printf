/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:26:31 by ehode             #+#    #+#             */
/*   Updated: 2025/10/19 20:07:02 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddr(size_t v, int prefix, int *count)
{
	const char	hexa_lowercase[] = "0123456789abcdef";

	if (v == 0 && prefix)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	if (prefix)
		ft_putstr("0x", count);
	if (v > 15)
		ft_putaddr(v / 16, 0, count);
	ft_putchar(((char *)hexa_lowercase)[v % 16], count);
}
