/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:31:11 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/08 15:35:29 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_check(const char c, void *arg)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_print_char(arg);
	else if (c == 's')
		i += ft_print_string(arg);
	else if (c == 'p')
		i += ft_print_pointer(arg);
	else if (c == 'd')
		i += ft_print_number(arg);
	else if (c == 'i')
		i += ft_print_number(arg);
	else if (c == 'u')
		i += ft_print_unsigned_decimal(arg);
	else if (c == 'x')
		i += ft_print_hex(arg, 'x');
	else if (c == 'X')
		i += ft_print_hex(arg, 'X');
	else if (c == '%')
	{
		write(1, '%', 1);
		i++;
	}
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{

			count += ft_check(str[i + 1], args);
			i++;
		}
		else
		{
			count += ft_print_char(str[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
