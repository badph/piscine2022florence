/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:30:45 by gfantech          #+#    #+#             */
/*   Updated: 2022/05/15 14:30:49 by gfantech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_row_left(int tab[4][4], int pos, int entry[16]);
int	check_col_down(int tab[4][4], int pos, int entry[16]);
int	check_row_right(int tab[4][4], int pos, int entry[16]);
int	check_col_up(int tab[4][4], int pos, int entry[16]);

int	check_double(int tab[4][4], int pos, int num)
{
	int	i;

	i = -1;
	while (++i < pos / 4)
	{
		if (tab[i][pos % 4] == num)
			return (1);
	}
	i = -1;
	while (++i < pos % 4)
	{
		if (tab[pos / 4][i] == num)
			return (1);
	}
	return (0);
}

int	check_case(int tab[4][4], int pos, int entry[16])
{
	if (check_row_left(tab, pos, entry) == 1)
		return (1);
	if (check_row_right(tab, pos, entry) == 1)
		return (1);
	if (check_col_down(tab, pos, entry) == 1)
		return (1);
	if (check_col_up(tab, pos, entry) == 1)
		return (1);
	return (0);
}
