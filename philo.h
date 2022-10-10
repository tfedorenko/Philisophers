/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:11:31 by tfedoren          #+#    #+#             */
/*   Updated: 2022/10/10 19:32:21 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define KNRM  "\x1B[0m"
#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN	"\x1B[36m"
#define WHITE  "\x1B[37m"

#define TIMES_TO_COUNT 21000

#include <pthread.h>

typedef struct s_counter
{
	pthread_mutex_t count_mutex;
	unsigned int count;
} t_counter;

typedef struct s_philosopher
{
	int philosopher_number;
	unsigned int number_times_has_eaten;
	unsigned int time_last_meal;
	int fork_right;
	int fork_left;
	unsigned int time_to_think;
	pthread_t thread_id;
	
} t_philosopher;

typedef struct s_data
{
	int number_of_philosophers;
	int time_to_eat;
	int time_to_sleep;
	int time_to_die;
	int number_of_times_each_philosopher_must_eat;
	unsigned int start_time;
	
	pthread_mutex_t *forks;
	t_philosopher *philosopher;
} t_data;


int	ft_atoi(const char *str);
int	ft_isdigit(int c);
void	*ft_calloc(size_t num, size_t size);

time_t	get_time_in_ms(void);
void	init(t_data *data, int argc, char **argv);