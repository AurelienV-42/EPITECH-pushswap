/*
** EPITECH PROJECT, 2017
** Main
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "library.h"
#include "my.h"
#include <stddef.h>

int condition(char **av)
{
	for (int i = 1; av[i] != NULL; i++)
		for (int nb = 0; av[i][nb] != '\0'; nb++)
			if ((av[i][nb] < '0' || av[i][nb] > '9')
				&& (av[i][nb] != '-' && av[i][nb] != '+'))
				return (84);
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 1 || condition(av) == 84)
		return (my_putstr_error("You should insert integers\n"));
	if (push_swap((ac - 1), av) == 84)
		return (84);
	return (0);
}