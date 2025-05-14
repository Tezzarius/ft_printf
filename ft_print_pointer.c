/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:32:57 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/14 16:40:36 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_print_pointer(void *ptr)
{
	unsigned long	*c;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	c = &ptr;
	ft_print_string(c);
	return (0);
}

#include <stdio.h>

int main()
{
	char	*ptr;

	ptr = "Test";
	printf("%p\n", ptr);
	ft_print_pointer(ptr);
	return (0);
}
