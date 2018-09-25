/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrady,madonis,ejacalne <marvin@42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 23:46:45 by madonis's group   #+#    #+#             */
/*                                                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_replaceletter(int i, int row, char letter, int col, char letter2, char letter3)
{
	if (i == 1)
		ft_putchar(letter);
	else if (i == col && row != 0)
		ft_putchar(letter3);
	else
		ft_putchar(letter2);
}

void ft_addingfunction(int col, int row, char letter, char letter2, char letter3)
{
int i;
i = 1;
while (i <= col)
	{
	ft_replaceletter(i, row, letter, col, letter2, letter3);
	i++;
	}
}

void ft_createrow(int indicator, int col, int row)
{
	int i;

	i = 1;
	if (indicator == 0)
	{
		ft_addingfunction(col, row, 'A', 'B', 'C');
	}
	if (indicator == 2)
	{
		ft_addingfunction(col, row, 'A', 'B', 'C');
	}
	if (indicator == 1)
	{
		ft_addingfunction(col, row,'B', ' ', 'B');
	}
	if (indicator != 2)
		ft_putchar('\n');
}

void	rush03(int col, int row)
{
	int i;

	i = 1;
	while (i <= row)
		if (i == 1)
		{
			ft_createrow(0, col, row);
			i++;
		}
		else if (i == row)
		{
			ft_createrow(2, col, row);
			i++;
		}
		else if (i != 1 || i != row)
		{
			ft_createrow(1, col, row);
			i++;
		}
	ft_putchar('\n');
}
