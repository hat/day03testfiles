/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 10:52:52 by thendric          #+#    #+#             */
/*   Updated: 2016/08/12 23:32:58 by thendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int main(void)
{
	char *str;

	str = "Hello world!";
	ft_strlen(str);
	printf("Number of chars: %d", ft_strlen(str));
	return (0);
}
