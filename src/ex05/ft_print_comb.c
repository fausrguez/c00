/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/27 16:53:54 by farodrig      #+#    #+#                 */
/*   Updated: 2021/08/27 17:44:46 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(char cents, char tens, char units)
{
	write(1, &cents, 1);
	write(1, &tens, 1);
	write(1, &units, 1);
}

/* Displays all different combinations of three different digits in
/* ascending order, listed by ascending order - yes, repetition is voluntary
*/

void	ft_print_comb(void)
{
	char	cents;
	char	tens;
	char	units;

	cents = '0';
	while (cents <= '9')
	{
		tens = cents + 1;
		while (tens <= '9')
		{
			units = tens + 1;
			while (units <= '9')
			{
				if (cents != tens && cents != units && tens != units)
				{
					print_comb(cents, tens, units);
					if (cents + 2 < '9')
						write(1, ", ", 2);
				}
				units++;
			}
			tens++;
		}
		cents++;
	}
}
