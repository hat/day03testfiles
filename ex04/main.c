/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 10:52:52 by thendric          #+#    #+#             */
/*   Updated: 2016/08/12 23:09:54 by thendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int *a;
	int *b;
	int num_a;
	int num_b;

	num_a = 40;
	num_b = 20;
	a = &num_a;
	b = &num_b;
	printf("A is currently: %d B is currently: %d\n", *a, *b);
	ft_ultimate_div_mod(a, b);
	printf("A is now: %d B is now: %d", *a, *b);
	return (0);
}
