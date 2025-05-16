/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:21:39 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/16 14:25:29 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	print_digit(unsigned int n, const char x)
{
	char	*baselow;
	char	*baseupp;

	baselow = "0123456789abcdef";
	baseupp = "0123456789ABCDEF";
	if (n >= 16)
		print_digit(n / 16, x);
	if (x == 'x')
		ft_print_char(baselow[n % 16]);
	else if (x == 'X')
		ft_print_char(baseupp[n % 16]);
}

int	ft_print_hex(unsigned int n, const char x)
{
	unsigned int	i;

	if (!n)
		return (ft_print_number(n));
	print_digit(n, x);
	i = 0;
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

/* #include <stdio.h>

int main()
{
	int num = 5386;
	int	i = 0;

	i += ft_print_hex(num, 'X');
	write(1, "\n", 1);
	printf("%d\n", i);
	i += ft_print_hex(num, 'x');
	write(1, "\n", 1);
	printf("%d\n", i);

} */
