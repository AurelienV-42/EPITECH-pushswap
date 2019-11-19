/*
** EPITECH PROJECT, 2018
** Library : my_atoi
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

int my_atoi(char *str)
{
	int i = 0;
	int nb = 0;
	int neg = 1;

	while (str && str[i] != '\0') {
		for (; str[i] == '-' || str[i] == '+'; i++)
			if (str[i] == '-')
				neg *= -1;
		if ((str[i] < '0' || str[i] > '9')
			&& (str[i] != '-' && str[i] == '+'))
			return (-1);
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (neg * nb);
}
