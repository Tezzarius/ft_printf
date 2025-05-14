/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:01:02 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/08 15:35:44 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_string(char *str)
{
	int	i;

	if (!*str)
		return (0);
	i = 0;
	while (str[i])
		write(1, str[i++], 1);
	return (i);
}
