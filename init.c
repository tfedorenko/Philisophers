/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:13:25 by tfedoren          #+#    #+#             */
/*   Updated: 2022/10/10 19:32:08 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	init_data(t_data *data, int argc, char **argv)
{
	data->number_of_philosophers = ft_atoi(argv[1]);
	data->time_to_die = ft_atoi(argv[2]);
	data->time_to_eat = ft_atoi(argv[3]);
	data->time_to_sleep = ft_atoi(argv[4]);
	if (argc == 6)
		data->number_of_times_each_philosopher_must_eat = ft_atoi(argv[5]);
	data->start_time = get_time_in_ms();
	data->philosopher = ft_calloc(data->number_of_philosophers, \
				sizeof(t_philosopher));
}

// void init_philosopher(t_data *data, int nbr, t_philosopher *philosopher)
// {
// 	philosopher->philosopher_number = nbr;
// 	philosopher->number_times_has_eaten = 0;
// 	philosopher->time_last_meal = data->start_time;
// 	philosopher->fork_left = nbr - 1;
// 	philosopher->time_to_think = 0;
// 	if (name != data->number_of_philosophers)
// 		philosopher->fork_right = name;
// 	else
// 		philosopher->fork_right = 0;
// }

void	init_philosophers(t_data *data, t_philosopher *philosopher)
{
	int	i;

	i = 0;
	while (i < data->number_of_philosophers)
	{
		philosopher->philosopher_number = i;
		philosopher->number_times_has_eaten = 0;
		philosopher->time_last_meal = data->start_time;
		philosopher->fork_left = i - 1;
		philosopher->time_to_think = 0;
		if (i != data->number_of_philosophers)
			philosopher->fork_right = i;
		else
			philosopher->fork_right = 0;
		// init_philosopher(data, i + 1, &data->philosopher[i]);
		i++;
	}
}

pthread_mutex_t	get_fork(void)
{
	pthread_mutex_t	mutex;

	pthread_mutex_init(&mutex, NULL);
	return (mutex);
}

void	init_forks(t_data *data)
{
	int	i;
	// pthread_mutex_t	mutex;
	
	i = 0;
	while (i < data->number_of_philosophers)
	{
		data->forks[i] = get_fork();
		i++;
	}
}

void	init(t_data *data, int argc, char **argv)
{
	init_data(data, argc, argv);
	if (data->number_of_philosophers == 0)
		return ;
	init_forks(data);
	init_philosophers(data, data->philosopher);
}
