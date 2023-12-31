/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:48:53 by anmateo-          #+#    #+#             */
/*   Updated: 2023/06/06 17:48:55 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	key;
	int	n;
	int	n2;

	n = 1;
	n2 = 0;
	while (n < size)
	{
		key = tab[n];
		n2 = n - 1;
		while (n2 >= 0 && tab[n2] > key)
		{
			tab[n2 + 1] = tab[n2];
			n2--;
		}
		tab[n2 + 1] = key;
		n++;
	}
}
