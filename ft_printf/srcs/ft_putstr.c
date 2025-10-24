/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:16:33 by ehode             #+#    #+#             */
/*   Updated: 2025/10/20 18:02:49 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *count)
{
	int	s_length;
	int	length;

	if (!s)
	{
		ft_putstr("(null)", count);
		return ;
	}
	s_length = ft_strlen(s);
	length = write(1, s, s_length);
	if (length > 0)
		*count += length;
}
