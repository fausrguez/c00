/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/27 12:12:30 by farodrig      #+#    #+#                 */
/*   Updated: 2021/08/27 12:12:34 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Write a function that displays the character passed as a parameter. */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
