/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 09:24:30 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/01 10:38:13 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	dl;
	size_t	sl;
	size_t	i;

	sl = ft_strlen(src);
	dl = 0;
	while (dl < size && dest[dl])
		dl++;
	if (dl == size)
		return (dl + sl);
	i = 0;
	while (src[i] && (dl + i + 1) < size)
	{
		dest[dl + i] = src[i];
		i++;
	}
	dest[dl + i] = '\0';
	return (dl + sl);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	char str[14] = "i";

	printf("%d\n", ft_strlcat(str, " don't know what i should write....", 15));
	printf("%s\n", str);
	return (0);
} */