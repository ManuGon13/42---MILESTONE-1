/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:51:15 by egonin            #+#    #+#             */
/*   Updated: 2025/11/05 12:33:01 by egonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return (char *)&s[i];
		i++;
	}
	if ((char)c == '\0')
		return (char *)&s[i];
	return (NULL);
}
int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Il manque un argument");
		return (0);
	}
	const char *str = argv[1];
	char c = argv[2][0];
	char *result = strchr(str, c);

	if (result)
		printf("Caractere '%c' trouve a partir de: \"%s\"\n", c, result);
	else
		printf("Caractere '%c' non trouve dans: \"%s\"\n", c, str);
	return (0);
}
