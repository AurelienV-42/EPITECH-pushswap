/*
** EPITECH PROJECT, 2022
** CPE_pushswap_2017
** File description:
** Created by Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "swap.h"
#include "library.h"
#include <stdlib.h>

int create_int(swap_t *swap, int len, char **av)
{
	int *first = malloc(sizeof(int) * (len + 1));
	int *second = malloc(sizeof(int) * (len + 1));
	int nb = 0;

	first[len] = '\0';
	second[len] = '\0';
	if (first == NULL || second == NULL)
		return (84);
	for (int i = 1; i < (len + 1); i++, nb++) {
		first[nb] = my_atoi(av[i]);
		second[nb] = first[nb];
	}
	swap->first = first;
	swap->second = second;
	return (0);
}