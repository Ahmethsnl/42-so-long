/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printadress.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmsanli <ahmsanli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:05:00 by ahmsanli          #+#    #+#             */
/*   Updated: 2023/10/18 18:29:36 by ahmsanli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_to_hex_pf(size_t n, int i, char *set)
{
	if (n >= 16)
	{
		i = ft_to_hex_pf(n / 16, i, set);
		i = ft_to_hex_pf(n % 16, i, set);
	}
	else
		i = ft_putchar_print(set[n], i);
	return (i);
}

int	ft_putadress_print(void *p, int i)
{
	size_t	ptr;

	if (p == NULL)
		i = ft_putstr_print("0x0", i);
	else
	{
		ptr = (size_t)p;
		i = ft_putstr_print("0x", i);
		i = ft_to_hex_pf(ptr, i, "0123456789abcdef");
	}
	return (i);
}
