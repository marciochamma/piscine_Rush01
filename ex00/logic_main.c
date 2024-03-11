/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:58:45 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/12 22:21:29 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_mandatory_logic_1(int arr[], int out[4][4], int count);
int	ft_mandatory_logic_2(int arr[], int out[4][4], int count);
int	ft_mandatory_logic_3(int arr[], int out[4][4], int count);
int	ft_mandatory_logic_4(int arr[], int out[4][4], int count);
int	ft_mandatory_logic_5(int arr[], int out[4][4], int count);
int	ft_mandatory_logic_6(int arr[], int out[4][4], int count);
int	ft_mandatory_logic_7(int out[4][4]);
int	ft_mandatory_logic_8(int out[4][4]);
int	ft_mandatory_logic_9(int out[4][4]);

int	ft_print(int out[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			out[row][col] += 48;
			write(1, &out[row][col], 1);
			out[row][col] -= 48;
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
	return (0);
}

int	ft_logic_zero(int out[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			out[row][col] = 0;
			col++;
		}
		row++;
	}
	return (0);
}

int	ft_logic_main(int *arr, int out[4][4])
{
	int	count;

	count = 0;
	ft_mandatory_logic_1(arr, out, count);
	ft_mandatory_logic_2(arr, out, count);
	ft_mandatory_logic_3(arr, out, count);
	ft_mandatory_logic_4(arr, out, count);
	ft_mandatory_logic_5(arr, out, count);
	ft_mandatory_logic_6(arr, out, count);
	ft_mandatory_logic_7(out);
	ft_mandatory_logic_8(out);
	ft_mandatory_logic_9(out);
	ft_print(out);
	return (0);
}
