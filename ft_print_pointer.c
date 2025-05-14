/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:32:57 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/08 14:52:11 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_print_pointer(void *ptr)
{
	char	*c;

	c = (char *)&ptr;
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
