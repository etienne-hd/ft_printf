/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:23:34 by ehode             #+#    #+#             */
/*   Updated: 2025/10/19 18:00:30 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static const char	*get_format(const char *s)
{
	const char	*formats[] = {"%c", "%s", "%p", "%d", "%i", "%u", "%x", "%X",
		"%%", NULL};
	size_t		i;

	if (*s == '%')
	{
		i = 0;
		while (formats[i])
		{
			if (ft_startwith(s, formats[i]))
				return (formats[i]);
			i++;
		}
	}
	return (NULL);
}

static void	handle_format(va_list *args, const char *format, int *count)
{
	if (!ft_strcmp("%c", format))
		ft_putchar(va_arg(*args, int), count);
	else if (!ft_strcmp("%s", format))
		ft_putstr(va_arg(*args, char *), count);
	else if (!ft_strcmp("%p", format))
		ft_putaddr((size_t)va_arg(*args, void *), 1, count);
	else if (!ft_strcmp("%d", format))
		ft_putnbr((int)va_arg(*args, int), count);
	else if (!ft_strcmp("%i", format))
		ft_putnbr((int)va_arg(*args, int), count);
	else if (!ft_strcmp("%u", format))
		ft_putunbr((unsigned int)va_arg(*args, unsigned int), count);
	else if (!ft_strcmp("%x", format))
		ft_putnbrhexa((unsigned int)va_arg(*args, int), 1, count);
	else if (!ft_strcmp("%X", format))
		ft_putnbrhexa((unsigned int)va_arg(*args, int), 0, count);
	else if (!ft_strcmp("%%", format))
		ft_putstr("%", count);
}

int	ft_printf(const char *s, ...)
{
	va_list		args;
	size_t		i;
	const char	*format;
	int			count;

	if (!s)
		return (-1);
	va_start(args, s);
	count = 0;
	i = 0;
	while (s[i])
	{
		format = get_format(s + i);
		if (format)
		{
			i += ft_strlen(format);
			handle_format(&args, format, &count);
		}
		else
		{
			ft_putchar(s[i], &count);
			i++;
		}
	}
	return (count);
}
