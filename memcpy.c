/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:19:49 by egonin            #+#    #+#             */
/*   Updated: 2025/11/04 18:00:01 by egonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		*memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d = dest;
	unsigned const char *s = src;

	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return dest;
}

/*int	main(void)
{
	char	dest[] = "abcdef";
	char	src[] = "qwerty";
	memcpy(dest, src, 4);
	printf("%s\n", dest);
	return 0;
}*/
