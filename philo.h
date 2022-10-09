/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:11:31 by tfedoren          #+#    #+#             */
/*   Updated: 2022/10/09 18:49:29 by tfedoren         ###   ########.fr       */
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

int	ft_atoi(const char *str);
int	ft_isdigit(int c);