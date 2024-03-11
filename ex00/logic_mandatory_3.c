/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_mandatory_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 22:15:42 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/12 22:17:09 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>


int	ft_mandatory_logic_9(int out[4][4])
{
	int	count;
	int	num_empty_spots;
	int	num_appeared[5];
	int	spot_col;
	int	spot_row;
	int	col;
	int row;

	col = 0;
	while (col < 4)
	{
		count = 0;
		while (count < 5)
		{
			num_appeared[count] = 0;
			count++;
		}
		num_empty_spots = 0;
		row = 0;
		while (row < 4)
		{
			if (out[row][col] == 0)
			{
				num_empty_spots++;
				spot_row = row;
				spot_col = col;
			}
			else
				num_appeared[out[row][col]]++;
			row++;
		}
		if (num_empty_spots == 1)
		{
			count = 1;
			while (count <= 4)
			{	
				if (num_appeared[count] == 0)
					out[spot_row][spot_col] = count;
				count++;
			}
		}
		col++;
	}
	return (0);
}

int	ft_mandatory_logic_8(int out[4][4])
{
	int	count;
	int	num_empty_spots;
	int	num_appeared[5];
	int	spot_col;
	int	spot_row;
	int	row;
	int col;

	row = 0;
	while (row < 4)
	{
		count = 0;
		while (count < 5)
		{
			num_appeared[count] = 0;
			count++;
		}
		num_empty_spots = 0;
		col = 0;
		while (col < 4)
		{
			if (out[row][col] == 0)
			{
				num_empty_spots++;
				spot_row = row;
				spot_col = col;
			}
			else
				num_appeared[out[row][col]]++;
			col++;
		}
		if (num_empty_spots == 1)
		{
			count = 1;
			while (count <= 4)
			{	
				if (num_appeared[count] == 0)
				{
					out[spot_row][spot_col] = count;
				}
				count++;
			}
		}
		row++;
	}
	return (0);
}
