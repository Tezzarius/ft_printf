/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:05:50 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/16 14:32:49 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int n)
{
	int		i;
	char	*fin;

	fin = ft_itoa(n);
	if (!fin)
		return (0);
	i = 0;
	while (fin[i])
		write(1, &fin[i++], 1);
	free (fin);
	return (i);
}
