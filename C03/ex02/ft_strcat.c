/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:59:41 by gbarone           #+#    #+#             */
/*   Updated: 2022/05/17 14:00:00 by gbarone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (dest[i] != '\0')
		i++;
	while (src[w] != '\0')
	{
		dest[i] = src[w];
		i++;
		w++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char s1[25] = "sonomario!";
	char *s2= "sonowario!rrrrooooo";

	ft_strcat(s1, s2);

	printf("%s", s1);
}*/
