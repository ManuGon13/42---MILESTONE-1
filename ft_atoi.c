/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egonin <egonin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 10:50:35 by egonin            #+#    #+#             */
/*   Updated: 2025/09/26 11:09:03 by egonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(const char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
			return (1);
	else
			return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 0;
	result = 0;
	while (ft_isspace(str[i] == 1))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
			if (str[i] == '+')
				sign = 1;
			if (str[i] == '-')
				sign = -1;
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
			result = result * 10 + str[i] - '0';
			i++;
	}
	return (sign * result);
}

int	main(void)
{
	char	*str;

	str = "-1234ab567";
	printf("%d\n", ft_atoi(str));
}
