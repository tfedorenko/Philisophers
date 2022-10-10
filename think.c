/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   think.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:32:58 by tfedoren          #+#    #+#             */
/*   Updated: 2022/10/10 14:40:12 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	time_to_think(t_data *data, t_philosopher *philosopher)
{
	philosopher->time_to_think = (data->time_to_die - (get_time_in_ms() - \
				philosopher->time_last_meal) - data->time_to_eat) / 2;
}
