/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:18:14 by alevra            #+#    #+#             */
/*   Updated: 2022/07/07 21:06:32 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putnbr(int nb);
void	ft_sort_int_tab(int *tab, int size);

int	main(int argc, char **argv)
{
	int tab[10] = {1, 1, 0, 4, -5, 6, -7, 8, 999999, 10};
	int i;
	char c;
	i = 0;
	int res;
	while(tab[i] != 1)  
		{   
			c = '0' + tab[i];
			write(1,&c,1);
			i++; 
		}
	ft_putnbr(res);
	return (0);
}



void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{	
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}	
	else
	{
		ft_putchar(nb + 48);
	}
}