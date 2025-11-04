/* ********************* ***************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CORRES_ft_itoa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egonin <egonin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 22:07:59 by egonin            #+#    #+#             */
/*   Updated: 2025/10/02 19:03:50 by egonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	long	n;
	int	len;
	char	*str;
	long	tmp;

	n = nbr;
	if (n <= 0)
		len = 1;
	else
		len = 0:
	tmp = n;
	if (n < 0)
		tmp = -n;
	while (tmp > 0)
	{
		len++;
		tmp = tmp / 10;
	}
	str = malloc((len + 1) *sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[len] = (n % 10) + '0';
		len--;
		n = n / 10;
	}
	return (str);
}
