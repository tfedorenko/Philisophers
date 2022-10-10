/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:09:55 by tfedoren          #+#    #+#             */
/*   Updated: 2022/10/10 16:05:08 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || \
			str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
	i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

void	*ft_calloc(size_t num, size_t size)
{
	char	*m;

	m = malloc(size * num);
	if (!m)
		return (NULL);
	ft_memset(m, 0, size * num);
	return (m);
}
