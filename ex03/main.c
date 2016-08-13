/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 10:52:52 by thendric          #+#    #+#             */
/*   Updated: 2016/08/12 16:40:49 by thendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);
void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int *div;
	int *mod;

	a = 40;
	b = 20;
	c = 0;
	d = 0;
	div = &c;
	mod = &d;
	ft_div_mod(a, b, div, mod);
	printf("Div is: %d\n", *div);
	printf("Mod is %d\n", *mod);
	return (0);
}
