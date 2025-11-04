/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egonin <egonin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 19:48:41 by egonin            #+#    #+#             */
/*   Updated: 2025/10/02 12:16:40 by egonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && !is_sep(str[i], charset))
			i++;
		}
	}
	return (count);
}

char	*word_dup(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = 0;
	while (str[len] && is_sep(str[len], charset) == 0)
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset) == 1)
			i++;
		if (str[i])
		{
			tab[j] = word_dup(&str[i], charset);
			j++;
			while (str[i] && is_sep(str[i], charset) == 0)
				i++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

int	main(void)
{
	char	**result;
	int		i;

	i = 0;
	result = ft_split("Hello, 42, Paris", " ,");
	while (result[i])
	{
		printf("[%s]\n", result[i]);
		i++;
	}
	return (0);
}
