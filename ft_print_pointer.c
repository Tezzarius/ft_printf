/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:32:57 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/16 14:19:28 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

static void	print_hexlong(unsigned long n, const char x)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		print_hexlong(n / 16, x);
	ft_print_char(base[n % 16]);
}

int	ft_print_pointer(void *ptr)
{
	unsigned long	n;
	int				i;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	n = (unsigned long) ptr;
	write(1, "0x", 2);
	print_hexlong(n, 'x');
	i = 0;
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	i += 2;
	return (i);
}

/* #include <stdio.h>

int main()
{
	char	*ptr;

	ptr = "Testsubject";
	printf("%p\n", ptr);
	ft_print_pointer(ptr);
	return (0);
} */
