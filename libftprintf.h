/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:26:04 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/08 15:11:21 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

int	ft_print_char(char c);
int	ft_print_hex(int n, const char x);
int	ft_print_number(int n);
int	ft_print_pointer(void *ptr);
int	ft_print_string(char *str);
int	ft_print_unsigned_decimal(unsigned int n);
int	ft_printf(const char *conv, ...);

#endif
