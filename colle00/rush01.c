/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletlhoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:44:46 by aletlhoo          #+#    #+#             */
/*   Updated: 2020/07/14 13:44:58 by aletlhoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void ft_putchar(char c);

void rush(int x, int y)
{
    int i;
    int j;
    i=1;
    j=1;
    while(i<=y)
    {
        while(j<=x)
        {
            if((i==1 && j==1) || (j==x && i==y && y!=1 && x!=1))
            {
                ft_putchar('/');
            }
            else if((j==x && i==1) || (j==1 && i==y))
            {
                ft_putchar('\\');
            }
            else if(j>1 && j<x && i>1 && i<y)
            {
                ft_putchar(' ');
            }
            else if(i==1 || i==y)
            {
                ft_putchar('*');
            }
            else if(j==1 || j==x)
            {
                ft_putchar('*');
            }
            if(j==x)
            {
                ft_putchar('\n');
            }

            j++;
        }
        i++;
        j=1;
    }
}
