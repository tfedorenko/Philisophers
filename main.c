/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:04:08 by tfedoren          #+#    #+#             */
/*   Updated: 2022/10/10 19:36:19 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <unistd.h>
#include <stdio.h>
// #include <sys/time.h>

void *start_routine(void *smth)
{
	
}

int	main(int argc, char **argv)
{
	t_data	*data;
	// (void)argc;
	// (void)argv;
	check_input(argc, argv);
	init(data, argc, argv);
	int i;

	i = 0;
	while(i < data->number_of_philosophers)
	{
		pthread_create(&data->philosopher[i].thread_id, NULL,  start_routine, &data->philosopher[i]);
		i++;
	}



	
	return (0);
}
