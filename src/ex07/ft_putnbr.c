/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/27 19:12:14 by farodrig      #+#    #+#                 */
/*   Updated: 2021/08/27 20:38:12 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

/* Displays the number entered as a parameter. Has to be able to display all 
 * possible values within an int type
 */

void	ft_putnbr(int nbr)
{
	char	number_str[10];
	int		i;

	i = 0;
	if (nbr == INT_MIN)
	{
		number_str[i++] = '8';
		nbr += 1;
		nbr /= 10;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	while (nbr / 10)
	{
		number_str[i++] = nbr % 10 + '0';
		nbr /= 10;
	}
	number_str[i] = nbr % 10 + '0';
	while (i >= 0)
	{
		write(1, &number_str[i--], 1);
	}
}
