/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:07:47 by bschwarz          #+#    #+#             */
/*   Updated: 2025/04/30 13:41:51 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	printf("FT: %d\n", ft_strncmp("Tabula Rasa", "Tabula Rasa", 5));
	printf("OG: %d\n\n", strncmp("Tabula Rasa", "Tabula Rasa", 5));
	printf("FT: %d\n", ft_strncmp("Tabula Rasa", "TabuLa Rasa", 5));
	printf("OG: %d\n\n", strncmp("Tabula Rasa", "TabuLa Rasa", 5));
	printf("FT: %d\n", ft_strncmp("Tabula Rasa", "Tabuda Rasa", 5));
	printf("OG: %d\n\n", strncmp("Tabula Rasa", "Tabuda Rasa", 5));
	printf("FT: %d\n", ft_strncmp("Tab", "Tabula Rasa", 5));
	printf("OG: %d\n\n", strncmp("Tab", "Tabula Rasa", 5));
	printf("FT: %d\n", ft_strncmp("atoms\0\0\0\0", "atoms\0abc", 8));
	printf("OG: %d\n", strncmp("atoms\0\0\0\0", "atoms\0abc", 8));
	return(0);
} */