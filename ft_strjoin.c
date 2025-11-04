/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egonin <egonin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 10:23:12 by egonin            #+#    #+#             */
/*   Updated: 2025/10/02 11:02:40 by egonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_seplen(int length, char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

int	ft_strlen(int size, char **strs, char *sep)
{
	int	length;
	int	i;
	int	j;

	length = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			length++;
			j++;
		}
		if (i != size - 1)
			length = ft_seplen(length, sep);
		i++;
	}
	return (length);
}

int	ft_sep(int k, char *res, char *sep)
{
	int	h;

	h = 0;
	while (sep[h] != '\0')
	{
		res[k] = sep[h];
		h++;
		k++;
	}
	return (k);
}

char	*ft_result(int size, char **strs, char *sep, char *res)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			res[k] = strs[i][j];
			j++;
			k++;
		}
		if (i != size - 1)
		{
			k = ft_sep(k, res, sep);
		}
		i++;
	}
	res[k] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		length;

	if (size == 0)
	{
		res = malloc(1 * sizeof(char));
		if (res == NULL)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	length = ft_strlen(size, strs, sep) + 1;
	res = malloc(length * sizeof(char));
	if (res == NULL)
		return (NULL);
	return (ft_result(size, strs, sep, res));
}

/*int	main(void)
{
	char	*strs[] =
		{
			"Bonjour ",
			"ca va",
			"ou quoi ?",
		};
	printf("%s\n", ft_strjoin(3, strs, "//"));
	return (0);
}*/
