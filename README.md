# Philosophers

## Usage
./philo [number_of_philosophers] [time_to_die] [time_to_eat] [time_to_sleep] [number_of_times_each_philosopher_must_eat](optional argument)

## やること
各哲学者を個別のスレッドとして作成する。
フォークの状態を保護するために、各フォークに対するミューテックスを作成する。
各哲学者のスレッド内で、フォークを取るときや置くときに対応するミューテックスをロック（Lock）し、処理を行った後にアンロック（Unlock）する。

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
