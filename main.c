/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:46:07 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/16 13:16:56 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int main()
{
	void	*ptr = NULL;
	char	c;
	char	*s = NULL;
	int		n = 98767453;
	int		i;

	i = ft_printf("FT_char: %c\n", c);
	printf("%d\n", i);
	i = printf("OG_char: %c\n", c);
	printf("%d\n\n", i);
	i = ft_printf("FT_string: %s\n", s);
	printf("%d\n", i);
	i = printf("OG_string: %s\n", s);
	printf("%d\n\n", i);
	i = ft_printf("FT_pointer: %p\n", ptr);
	printf("%d\n", i);
	i = printf("OG_pointer: %p\n", ptr);
	printf("%d\n\n", i);
	i = ft_printf("FT_number: %d\n", n);
	printf("%d\n", i);
	i = printf("OG_number: %d\n", n);
	printf("%d\n\n", i);
	i = ft_printf("FT_integer: %i\n", n);
	printf("%d\n", i);
	i = printf("OG_integer: %i\n", n);
	printf("%d\n\n", i);
	i = ft_printf("FT_unsigned decimal: %u\n", n);
	printf("%d\n", i);
	i = printf("OG_unsigned decimal: %u\n", n);
	printf("%d\n\n", i);
	i = ft_printf("FT_hexlow: %x\n", n);
	printf("%d\n", i);
	i = printf("OG_hexlow: %x\n", n);
	printf("%d\n\n", i);
	i = ft_printf("FT_hexup: %X\n", n);
	printf("%d\n", i);
	i = printf("OG_hexup: %X\n", n);
	printf("%d\n\n", i);
	i = ft_printf("FT_symbol: %%\n");
	printf("%d\n", i);
	i = printf("OG_symbol: %%\n");
	printf("%d\n", i);
	return (0);
}
