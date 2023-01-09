/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printtable.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 19:10:46 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/01 19:10:49 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{

int arr[4][4] = {
                {1, 2, 3, 4},
                {2, 3, 4, 1},
                {3, 4, 1, 2},
                {4, 1, 2, 3}
                };
int rows;
int columns;
for (rows = 0; rows < 4; rows++) 
    {

      for (columns = 0; columns < 1; columns++) 
        {
         printf("%d ", arr[rows][columns] );
        }
    }
printf("\n");
for (rows = 0; rows < 4; rows++) 
    {

      for (columns = 1; columns < 2; columns++) 
        {
         printf("%d ", arr[rows][columns] );
        }
    }
printf("\n");
for (rows = 0; rows < 4; rows++) 
    {

      for (columns = 2; columns < 3; columns++) 
        {
         printf("%d ", arr[rows][columns] );
        }
    }
printf("\n");
for (rows = 0; rows < 4; rows++) 
    {

      for (columns = 3; columns < 4; columns++) 
        {
         printf("%d ", arr[rows][columns] );
        }
    }
printf("\n");
    return (0);
}