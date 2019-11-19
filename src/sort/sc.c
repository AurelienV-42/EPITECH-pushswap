/*
** EPITECH PROJECT, 2022
** CPE_pushswap_2017
** File description:
** Created by Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

void sa(int *first)
{
	int i = first[1];

	first[1] = first[0];
	first[0] = i;
}

void sb(int *second)
{
	sa(second);
}

void sc(int *first, int *second)
{
	sa(first);
	sb(second);
}