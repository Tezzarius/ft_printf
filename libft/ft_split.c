/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:10:22 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/02 10:52:44 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *s, int c)
{
	int	count;
	int	sw;
	int	i;

	i = 0;
	sw = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && sw != 1)
		{
			count++;
			sw = 1;
		}
		else if (s[i] == c)
			sw = 0;
		i++;
	}
	return (count);
}

char	*ft_strndup(char const *src, int n)
{
	int		i;
	char	*dest;

	dest = (char *)malloc((n + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**fillarray(char const *s, char c)
{
	char	**dest;
	int		i;
	int		j;
	int		start;

	dest = malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	start = 0;
	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			dest[j++] = ft_strndup(&s[start], i - start);
		}
		else
			i++;
	}
	dest[j] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;

	if (!s)
		return (NULL);
	dest = fillarray(s, c);
	if (!dest)
		return (NULL);
	return (dest);
}

/* #include <stdio.h>

int main()
{
	char *string = "      split       this for   me  !       ";
	char **result = ft_split(string, ' ');
	printf("%s\n", result[0]);
	printf("%s\n", result[1]);
	printf("%s\n", result[2]);
	printf("%s\n", result[3]);
	printf("%s\n", result[4]);
	printf("%s\n", result[5]);
	return (0);
} */