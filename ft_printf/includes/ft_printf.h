/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:21:20 by ehode             #+#    #+#             */
/*   Updated: 2025/10/19 18:01:02 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

// PUT
void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putaddr(size_t v, int prefix, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putunbr(unsigned int nb, int *count);
void	ft_putnbrhexa(unsigned int v, int in_lowercase, int *count);

// UTILS
int		ft_startwith(const char *s, const char *val);
int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlen(const char *s);

// PRINTF
int		ft_printf(const char *s, ...);

#endif
