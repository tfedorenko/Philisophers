/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:04:08 by tfedoren          #+#    #+#             */
/*   Updated: 2022/10/09 20:39:40 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>


void	get_input(char **argument)
{
	int	number_of_philosophers;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	number_of_times_each_philosopher_must_eat;

	number_of_philosophers = ft_atoi(argument[1]);
	time_to_die = ft_atoi(argument[2]);
	time_to_eat = ft_atoi(argument[3]);
	time_to_sleep = ft_atoi(argument[4]);
	number_of_times_each_philosopher_must_eat = ft_atoi(argument[5]);
}

void	check_input(int nbr_arg, char **argument)
{
	int	i;
	int	j;

	if (nbr_arg != 5 && nbr_arg != 6)
	{
		write(1, "Wrong number of arguments\n", 26);
		return ;
	}
	i = 1;
	j = 0;
	while (argument[i])
	{
		j = 0;
		while (argument[i][j])
		{
			if (ft_isdigit(argument[i][j]) < 1 || ft_isdigit(argument[i][j]) > 9)
			{
				write(1, "There are not only digits in input\n", 35);
				return ;		
			}
			j++;
		}
		i++;
	}
}

time_t	get_time_in_ms(void)
{
	struct timeval tv;

	gettimeofday(&tv, NULL);
	return ((tv.tv_sec * 1000) + (tv.tv_usec / 1000));
}

void philo_sleep()
{
	
}


int	main(int argc, char **argv)
{
	// (void)argc;
	// (void)argv;	
	check_input(argc, argv);
	get_input(argv);

	return (0);

}
