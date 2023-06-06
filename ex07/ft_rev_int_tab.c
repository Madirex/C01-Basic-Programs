/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:52:19 by anmateo-          #+#    #+#             */
/*   Updated: 2023/06/06 16:52:20 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int start;
	int final = size - 1;

	start = 0;

	while (start < final)
	{
		int tmp;

		tmp = tab[start];
		tab[start] = tab[final];
		tab[final] = tmp;

		start++;
		final--;
	}
}
