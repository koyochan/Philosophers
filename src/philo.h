/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotkobay <kotkobay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:34:25 by kotkobay          #+#    #+#             */
/*   Updated: 2024/05/05 14:01:26 by kotkobay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>
# include <unistd.h>

typedef struct s_philo
{
	int		number_of_philosophers;
	double	time_to_die;
	double	time_to_eat;
	double	time_to_sleep;
	int		number_of_times_each_philosopher_must_eat;
}			t_philo;

double		ft_atod(const char *str);
void		exit_with_message(char *msg);

#endif