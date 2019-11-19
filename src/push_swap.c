/*
** EPITECH PROJECT, 2022
** CPE_pushswap_2017
** File description:
** Created by Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "my.h"
#include "library.h"
#include <stdlib.h>
#include <stdio.h>

static int all_is_sort(int *first, int len)
{
	for (int i = 0; i < (len - 1); i++)
		if (first[i] > first[i + 1])
			return (1);
	return (0);
}

static void sort(swap_t *swap)
{
	while (all_is_sort(swap->first, swap->len) == 1) {
		if (swap->first[0] > swap->first[1])
			pb(swap->first, swap->second, swap->len);
	}
}

int push_swap(int len, char **av)
{
	swap_t swap;

	swap.len = len;
	if (create_int(&swap, len, av) == 84)
		return (84);
	printf("At the start\n First : ");
	for (int i = 0; i < len; i++)
		printf("%d ", swap.first[i]);
	printf("\nSecond : ");
	for (int i = 0; i < len; i++)
		printf("%d ", swap.second[i]);
	sort(&swap);
	printf("\n");
	printf("\nAt the end\n First : ");
	for (int i = 0; i < len; i++)
		printf("%d ", swap.first[i]);
	printf("\nSecond : ");
	for (int i = 0; i < len; i++)
		printf("%d ", swap.second[i]);
	printf("\n");
	free(swap.first);
	free(swap.second);
	return (0);
}