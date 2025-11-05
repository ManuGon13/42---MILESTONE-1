/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:00:30 by egonin            #+#    #+#             */
/*   Updated: 2025/11/05 11:13:08 by egonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (siz > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return i;
}

int	main(void)
{
	const char src[] = "Hello, world!";
	char dst[] = "Couco";
	size_t size = strlcpy(dst, src, sizeof (dst));
	
	printf("dst: %s\n", dst);
	printf("src length : %zu\n", size);
	return (0);
}
