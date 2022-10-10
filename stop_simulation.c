/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stop_simulation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:27:09 by tfedoren          #+#    #+#             */
/*   Updated: 2022/10/10 14:28:18 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	has_simulation_stopped(t_data *data)
{
	int	flag;

	flag = 0;
	if (someone_died())
		flag = 1;
	else if (data->number_of_times_each_philosopher_must_eat)
	{
		if (number_have_eaten() == data->number_of_times_each_philosopher_must_eat)
			flag = 1;
	}
	return (flag);
}
