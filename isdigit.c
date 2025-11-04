/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:50:51 by egonin            #+#    #+#             */
/*   Updated: 2025/11/04 12:02:47 by egonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	isdigit(int	c)
{
	if (c >= '0' && c <= '9')
		return 1;
	return 0;
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		return 0;
	while (argv[1][i] != '\0')
		{
			if (isdigit (argv[1][i]))
				printf("%c est un chiffre\n", argv[1][i]);
			else
				printf("%c n'est pas un chiffre\n", argv[1][i]);
			i++;
		}
	return (0);
}
