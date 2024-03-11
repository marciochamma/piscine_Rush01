/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 08:58:23 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/13 08:23:40 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

// Check if array has mandatory 4x4 or 1x1 in the corners
int	ft_check_array_3(int arr[], int error, int count)
{
	error = 0;
	count = 0;
	while (count < 16)
	{
		if (count == 0 || count == 4 || count == 7)
		{
			if ((arr[count] == 49 && arr[count + 8] != 49)
				|| (arr[count + 8] == 49 && arr[count] != 49)
				|| (arr[count] == 52 && arr[count + 8] != 52)
				|| (arr[count + 8] == 52 && arr[count] != 52))
				error = 1;
		}
		if (count == 3)
		{
			if ((arr[count] == 49 && arr[count + 9] != 49)
				|| (arr[count + 9] == 49 && arr[count] != 49)
				|| (arr[count] == 52 && arr[count + 9] != 52)
				|| (arr[count + 9] == 52 && arr[count] != 52))
				error = 1;
		}
		count++;
	}
	return (error);
}

// Check if array has mandatory 4 and 1 in opposite side of borders
int	ft_check_array_2(int arr[], int eout[row][col] -= 48;rror, int count)
{
	error = 0;
	count = 0;
	while (count < 16)
	{
		if (count < 4
			&& arr[count] == 52 && arr[count + 4] != 49)
			error = 1;
		else if (count >= 4 & count < 8
			&& arr[count] == 52 && arr[count - 4] != 49)
			error = 1;
		else if (count >= 8 & count < 12
			&& arr[count] == 52 && arr[count + 4] != 49)
			error = 1;
		else if (count >= 12
			&& arr[count] == 52 && arr[count - 4] != 49)
			error = 1;
		count++;
	}
	return (error);
}

//Check if array numbers are < 1 or > 4
int	ft_check_array_1(int arr[], int error, int count)
{
	error = 0;
	count = 0;
	while (count < 16)
	{
		if (arr[count] < 48 || arr[count] > 57)
			error = 1;
		count++;
	}
	return (error);
}

int	ft_check_array(char *argv[])
{
	int		arr[16];
	int		error;
	int		count;

	count = 0;
	while (count < 16)
	{
		arr[count] = argv[1][count * 2];
		write(1, &arr[count], 1); // tirar
		count++;
	}
	write(1, "\n", 1); // tirar
	error = 0;
	if (ft_check_array_1(arr, error, count) == 1
		|| ft_check_array_2(arr, error, count) == 1
		|| ft_check_array_3(arr, error, count) == 1)
		error = 1;

	return (error);
}
