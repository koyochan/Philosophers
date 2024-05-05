# Philosophers

## Usage
./philo [number_of_philosophers] [time_to_die] [time_to_eat] [time_to_sleep] [number_of_times_each_philosopher_must_eat](optional argument)

## Debug

parse_argument(ac, av, &argument);
	printf("Arguments:\n");
	printf("number_of_philosophers: %d\n", argument.number_of_philosophers);
	printf("time_to_die: %lf\n", argument.time_to_die);
	printf("time_to_eat: %lf\n", argument.time_to_eat);
	printf("time_to_sleep: %lf\n", argument.time_to_sleep);
	if (ac == 6)
	{
		printf("number_of_times_each_philosopher_must_eat: %d\n",
			argument.number_of_times_each_philosopher_must_eat);
	}
