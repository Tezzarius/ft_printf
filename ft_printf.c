/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:31:11 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/16 10:33:36 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_check(va_list args, const char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_print_char(va_arg(args, int));
	else if (c == 's')
		i += ft_print_string(va_arg(args, char *));
	else if (c == 'p')
		i += ft_print_pointer(va_arg(args, void *));
	else if (c == 'd')
		i += ft_print_number(va_arg(args, int));
	else if (c == 'i')
		i += ft_print_number(va_arg(args, int));
	else if (c == 'u')
		i += ft_print_unsigned_decimal(va_arg(args, int));
	else if (c == 'x')
		i += ft_print_hex(va_arg(args, int), 'x');
	else if (c == 'X')
		i += ft_print_hex(va_arg(args, int), 'X');
	else if (c == '%')
	{
		write(1, "%", 1);
		i++;
	}
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	if (!*str)
		return (-1);
	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{

			count += ft_check(args, str[i + 1]);
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
