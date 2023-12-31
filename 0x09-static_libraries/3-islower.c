/*
 * File: 3-islower.c
 * Auth: Martin Mativo
 */

#include "main.h"

/**
 * _islower - checks for a lowercase character
 * @c: The character being checked.
 *
 * Return: 1 if character is lowercase, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
