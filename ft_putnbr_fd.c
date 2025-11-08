/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:29:34 by egonin            #+#    #+#             */
/*   Updated: 2025/11/08 16:30:53 by egonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	write(fd, &n, 1);
}

int	main(void)
{
	ft_putnbr_fd('5', 1);
	ft_putnbr_fd('\n', 1);
	return (0);
}
