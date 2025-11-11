/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:18:35 by egonin            #+#    #+#             */
/*   Updated: 2025/11/11 11:38:54 by egonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dup;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > strlen(s))
	{
		dup = malloc(1);
		if (!dup)
			return (NULL);
		dup[0] = '\0';
	}
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	while (i < len)
	{
		dup[i] = s[i + start];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
