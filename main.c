/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:04:08 by tfedoren          #+#    #+#             */
/*   Updated: 2022/10/08 19:04:36 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>





int main(int argc, char **argv)
{
	if(argc != 5 && argc != 6)
	{
		write(1, "Wrong number of arguments\n", 26);
		return (0);
	}
	(void)argv;

}