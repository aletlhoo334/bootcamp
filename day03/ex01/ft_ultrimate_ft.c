/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultrimate_ft.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletlhoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 14:47:27 by aletlhoo          #+#    #+#             */
/*   Updated: 2020/07/11 15:08:50 by aletlhoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_ultrimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
	int nbr;
	int *a1;
	int **a2;
	int ***a3;
	int ****a4;
	int *****a5;
	int ******a6;
	int *******a7;
	int ********a8;
	int *********a9;

	nbr = 1;
	a1 = &nbr;
	a2 = &a1;
	a3 = &a2;
	a4 = &a3;
	a5 = &a4;
	a6 = &a5;
	a7 = &a6;
	a8 = &a7;
	a9 = &a8;
	ft_ultrimate_ft(a9);
	ft_putchar((nbr / 10) + '0');
	ft_putchar((nbr % 10) + '0');
			return(0);
}
