/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:46:07 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/28 09:47:11 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	void	*ptr;
	char	*s = "Teststring";
	int		n = -9876545;
	int		i;

	i = ft_printf("FT: Tabula Rasa ");
	printf("%d\n", i);
	i = printf("OG: Tabula Rasa ");
	printf("%d\n\n", i);
	i = ft_printf("FT_char: %c ", 'c');
	printf("%d\n", i);
	i = printf("OG_char: %c ", 'c');
	printf("%d\n\n", i);
	i = ft_printf("FT_string: %s ", s);
	printf("%d\n", i);
	i = printf("OG_string: %s ", s);
	printf("%d\n\n", i);
	i = ft_printf("FT_pointer: %p ", ptr);
	printf("%d\n", i);
	i = printf("OG_pointer: %p ", ptr);
	printf("%d\n\n", i);
	i = ft_printf("FT_number: %d ", n);
	printf("%d\n", i);
	i = printf("OG_number: %d ", n);
	printf("%d\n\n", i);
	i = ft_printf("FT_integer: %i ", n);
	printf("%d\n", i);
	i = printf("OG_integer: %i ", n);
	printf("%d\n\n", i);
	i = ft_printf("FT_unsigned decimal: %u ", n);
	printf("%d\n", i);
	i = printf("OG_unsigned decimal: %u ", n);
	printf("%d\n\n", i);
	i = ft_printf("FT_hexlow: %x ", n);
	printf("%d\n", i);
	i = printf("OG_hexlow: %x ", n);
	printf("%d\n\n", i);
	i = ft_printf("FT_hexup: %X ", n);
	printf("%d\n", i);
	i = printf("OG_hexup: %X ", n);
	printf("%d\n\n", i);
	i = ft_printf("FT_symbol: %% ");
	printf("%d\n", i);
	i = printf("OG_symbol: %% ");
	printf("%d\n", i);
	return (0);
}
