/*
** EPITECH PROJECT, 2022
** CPE_pushswap_2017
** File description:
** Created by Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include <stdio.h>

void ra(int *first, int len)
{
	int n_len = len;
	int nb = 0;

	len--;
	for (int i = 0; i < (n_len / 2); i++, len--) {
		nb = first[len];
		first[len] = first[i];
		first[i] = nb;
	}
}

void rb(int *second, int len)
{
	ra(second, len);
}

void rr(int *first, int *second, int len)
{
	ra(first, len);
	ra(second, len);
}