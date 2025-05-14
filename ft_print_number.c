/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:05:50 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/08 15:35:41 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_number(int n)
{
	int		i;
	char	*fin;

	if (!n)
		return (0);

	fin = ft_itoa(n);
	i = 0;
	while (fin[i])
		write(1, fin[i++], 1);
	return (i);
}
