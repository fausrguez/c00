/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/27 15:37:13 by farodrig      #+#    #+#                 */
/*   Updated: 2021/08/27 15:55:12 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*  If n is negative, display 'N'. If n is positive or null, display 'P' */

void	ft_is_negative(int n)
{
	if (n < 0)
	{	
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}
