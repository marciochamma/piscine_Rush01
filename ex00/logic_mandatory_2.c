/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_mandatory_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 22:14:11 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/12 22:14:51 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

// Check if there is a number filled 3x and add the 4th
int	ft_mandatory_logic_7(int out[4][4])
{
	int	row;
	int	col;
	int	nbr;
	int	freq[5];
	int	count;
	int	spot_row;
	int	spot_col;

	row = 0;
	while (row < 5)
	{
		freq[row] = 0;
		row++;
	}

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			nbr = out[row][col];
			freq[nbr]++;
			col++;
		}
		row++;
	}

	count = 1;
	while (count < 5)
	{
		if (freq[count] == 3)
		{
			row = 0;
			col = 0;
			while (col < 4)
			{
				if (out[row][col] == count)
				{
					row++;
					col = 0;
				}
				else if (col + 1 == 4)
					spot_row = row;
			col++;
			}

			row = 0;
			col = 0;
			while (row < 4)
			{
				if (out[row][col] == count)
				{
					col++;
					row = 0;
				}
				else if (row + 1 == 4)
					spot_col = col;
			row++;
			}
			out[spot_row][spot_col] = count;
		}
	count++;
	}
	return (0);
}

// Check columns and set mandatory input for borders 1 & 2
int	ft_mandatory_logic_6(int arr[], int out[4][4], int count)
{
	count = 0;
	while (count < 4)
	{
		if ((arr[count + 8] == 1 && arr[count + 12] == 2))
			out[3][count] = 3;
		if ((arr[count + 8] == 2 && arr[count + 12] == 1))
			out[0][count] = 3;
		count++;
	}
	return (0);
}

// Check rows and set mandatory input for borders 1 & 2
int	ft_mandatory_logic_5(int arr[], int out[4][4], int count)
{
	count = 0;
	while (count < 4)
	{
		if ((arr[count] == 1 && arr[count + 4] == 2))
			out[3][count] = 3;
		if ((arr[count] == 2 && arr[count + 4] == 1))
			out[0][count] = 3;
		count++;
	}
	return (0);
}
