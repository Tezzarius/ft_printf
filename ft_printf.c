/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:31:11 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/16 14:33:25 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list args, const char format)
{
	int	i;

	i = 0;
	if (format == 'c')
		i += ft_print_char(va_arg(args, int));
	else if (format == 's')
		i += ft_print_string(va_arg(args, char *));
	else if (format == 'p')
		i += ft_print_pointer(va_arg(args, void *));
	else if (format == 'd')
		i += ft_print_number(va_arg(args, int));
	else if (format == 'i')
		i += ft_print_number(va_arg(args, int));
	else if (format == 'u')
		i += ft_print_unsigned_decimal(va_arg(args, unsigned int));
	else if (format == 'x')
		i += ft_print_hex(va_arg(args, int), 'x');
	else if (format == 'X')
		i += ft_print_hex(va_arg(args, int), 'X');
	else if (format == '%')
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
			i++;
			count += ft_check(args, str[i]);
		}
		else
			count += ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
