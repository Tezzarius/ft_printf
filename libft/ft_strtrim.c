/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:05:50 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/02 10:29:04 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char const src, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (src == set[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		len;
	int		i;
	int		j;

	if (!s1)
		return (NULL);
	len = ft_strlen((char *)s1);
	i = 0;
	while (s1[i] && !ft_check(s1[i], set))
		i++;
	while (len != 0 && !ft_check(s1[len - 1], set))
		len--;
	if (i > len)
		dest = malloc(1 * sizeof(char));
	else
		dest = malloc((len - i + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	j = 0;
	while (s1[i] && i < len)
		dest[j++] = s1[i++];
	dest[j] = '\0';
	return (dest);
}

/* int main()
{
	char *s1 = "  \t \t \n   \n\n\n\t";
	//char *s2 = "  \t \t \n Hello \t  Please\n Trim me ! \n\n\n\t";
	ft_strtrim(s1, " \n\t");
	return (0);
} */