/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletlhoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 16:35:12 by aletlhoo          #+#    #+#             */
/*   Updated: 2020/07/15 16:53:28 by aletlhoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c ,1);
}

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j = 0;

	i = 0;

	while(str[i] != '0')
	{
		while(to_find[j] == str[i + j])
		{
			if(to_find [j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return 0;
}

