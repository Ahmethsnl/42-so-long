/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printhex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmsanli <ahmsanli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:10:44 by ahmsanli          #+#    #+#             */
/*   Updated: 2023/10/18 18:40:08 by ahmsanli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_print((num + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_print((num - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_print((num - 10 + 'A'), 1);
		}
	}
}

int	ft_puthex_print(unsigned int x, int i, char format)
{
	if (x == 0)
		return (ft_putchar_print('0', i));
	else
		ft_put_hex(x, format);
	return (i + ft_hex_len(x));
}
