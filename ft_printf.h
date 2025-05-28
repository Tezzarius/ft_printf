/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:26:04 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/16 14:25:48 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_print_char(int c);
int	ft_print_hex(unsigned long n, const char format);
int	ft_print_number(int n);
int	ft_print_pointer(void *ptr);
int	ft_print_string(char *str);
int	ft_printf(const char *conv, ...);

#endif
