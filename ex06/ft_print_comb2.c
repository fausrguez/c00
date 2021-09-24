/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/27 18:16:41 by farodrig      #+#    #+#                 */
/*   Updated: 2021/08/27 19:02:33 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	print_units(int n)
{
	char	units;

	units = n % 10 + '0';
	write(1, &units, 1);
}

static void	print_tens(int n)
{
	char	tens;

	tens = n / 10 + '0';
	write(1, &tens, 1);
}

static void	print_comb(int n)
{
	print_tens(n);
	print_units(n);
}

/* Displays all different combinations of two digits between 00 and 99 
 * Expected: 00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ...,
 * 97 99, 98 99
 * */

void	ft_print_comb2(void)
{
	int	first_set;
	int	second_set;

	first_set = 0;
	while (first_set <= 98)
	{
		second_set = first_set + 1;
		while (second_set <= 99)
		{
			print_comb(first_set);
			write(1, " ", 1);
			print_comb(second_set);
			if (first_set != 98)
				write(1, ", ", 2);
			second_set++;
		}
		first_set++;
	}
}
