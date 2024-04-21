/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmsanli <ahmsanli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:17:32 by ahmsanli          #+#    #+#             */
/*   Updated: 2023/10/18 18:21:54 by ahmsanli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_putchar_print(char c, int i);
int	ft_putstr_print(char *s, int i);
int	ft_putnbr_print(long n, int i);
int	ft_putnbr_unsigned(unsigned int n, int i);
int	ft_putadress_print(void *p, int i);
int	ft_puthex_print(unsigned int x, int i, char format);

#endif