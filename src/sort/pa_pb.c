/*
** EPITECH PROJECT, 2022
** CPE_pushswap_2017
** File description:
** Created by Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

void pa(int *first, int *second, int len)
{
	if (second[0] == 0)
		return;
	for (int i = len; i != -1; i--)
		if (first[i] != 0)
			first[i + 1] = first[i];
	first[0] = second[0];
	for (int i = 0; i < len; i++)
		second[i] = second[i + 1];
}

void pb(int *first, int *second, int len)
{

	pa(second, first, len);
}