/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:21:43 by egonin            #+#    #+#             */
/*   Updated: 2025/11/05 18:57:07 by egonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*memchr(const void *s, int c, size_t n)
{
	const unsigned char *p = (const unsigned char *)s;
	unsigned char	uc;

	uc = (unsigned char)c;
	while (n > 0)
	{
		if (*p == uc)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}		 

int	main(void)
{
	char str[] = "Bonjour";
	char *ptr = memchr(str, 'j', 7);
	if (ptr)
		printf("Trouve : %s\n", ptr);
	else
		printf("Non trouve\n");
	return (0);
}
