/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_decimal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:05:50 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/16 11:58:18 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <unistd.h>

static void	ft_output_unsigned_decimal(unsigned int n)
{
	char	c;

	if (n > 9)
		ft_output_unsigned_decimal(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	ft_print_unsigned_decimal(unsigned int n)
{
	int					i;
	unsigned int		tmp;

	if (!n)
		return (ft_print_number(n));
	i = 0;
	tmp = n;
	while (tmp > 0)
	{
		tmp /= 10;
		i++;
	}
	ft_output_unsigned_decimal(n);
	return (i);
}

/* #include <stdio.h>

int main()
{
	int	i;

	i = 0;
	i += ft_print_unsigned_decimal(3234567890);
	write(1, "\n", 1);
	printf("%i", i);
} */
