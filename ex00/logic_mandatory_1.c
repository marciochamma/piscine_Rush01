/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_mandatory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:36:28 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/12 22:13:07 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

// Check columns and set mandatory input for borders 2 & 3
int	ft_mandatory_logic_4(int arr[], int out[4][4], int count)
{
	count = 0;
	while (count < 4)
	{
		if ((arr[count + 8] == 2 && arr[count + 12] == 3))
			out[count][1] = 4;
		if ((arr[count + 8] == 3 && arr[count + 12] == 2))
			out[count][2] = 4;
		count++;
	}
	return (0);
}

// Check rows and set mandatory input for borders 2 & 3
int	ft_mandatory_logic_3(int arr[], int out[4][4], int count)
{
	count = 0;
	while (count < 4)
	{
		if ((arr[count] == 2 && arr[count + 4] == 3))
			out[1][count] = 4;
		if ((arr[count] == 3 && arr[count + 4] == 2))
			out[2][count] = 4;
		count++;
	}
	return (0);
}

// Check columns and set mandatory input for borders 4 | 1
int	ft_mandatory_logic_2(int arr[], int out[4][4], int count)
{
	count = 8;
	while (count < 16)
	{
		if (count >= 8 && count < 12 && arr[count] == 4)
		{
			out[count - 8][0] = 1;
			out[count - 8][1] = 2;
			out[count - 8][2] = 3;
			out[count - 8][3] = 4;
		}
		else if (count >= 8 && count < 12 && arr[count] == 1)
			out[count - 8][0] = 4;
		else if (count >= 12 && arr[count] == 4)
		{
			out[count - 12][0] = 1;
			out[count - 12][1] = 2;
			out[count - 12][2] = 3;
			out[count - 12][3] = 4;
		}
		else if (count >= 12 && arr[count] == 1)
			out[count - 12][3] = 4;
	count++;
	}
	return (0);
}

// Check rows and set mandatory input for border 4 | 1
int	ft_mandatory_logic_1(int arr[], int out[4][4], int count)
{
	count = 0;
	while (count < 8)
	{
		if (count < 4 && arr[count] == 4)
		{
			out[0][count] = 1;
			out[1][count] = 2;
			out[2][count] = 3;
			out[3][count] = 4;
		}
		else if (count < 4 && arr[count] == 1)
			out[0][count] = 4;
		else if (count >= 4 && count < 8 && arr[count] == 4)
		{
			out[3][count - 4] = 1;
			out[2][count - 4] = 2;
			out[2][count - 4] = 3;
			out[2][count - 4] = 4;
		}
		else if (count >= 4 && count < 8 && arr[count] == 1)
			out[3][count - 4] = 4;
	count++;
	}
	return (0);
}
