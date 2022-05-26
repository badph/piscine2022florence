/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:25:55 by gfantech          #+#    #+#             */
/*   Updated: 2022/05/15 14:25:59 by gfantech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putstr(char *str);

int	check(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		return (1);
	if (ft_strlen(argv[1]) != 31)
		return (1);
	while (argv[1][i++] != '\0')
	{	
		if (argv[1][i] < '1' || argv[1][i] > '4')
		{
			ft_putstr("Errore: numeri fuori range");
			return (1);
		}
	}
	return (0);
}

int	*get_numbers(char *str)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof(int) * 16);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] >= '1' && str[i] <= '4')
			tab[j++] = ft_atoi(str + i);
	return (tab);
}
