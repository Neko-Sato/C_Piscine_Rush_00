/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketakgi <ketakgi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 22:29:41 by ketakgi           #+#    #+#             */
/*   Updated: 2023/03/10 22:36:29 by ketakgi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

void rash(int m, int n)
{
    int i;
    int j;

    while(i<=m){
        while(j<n){
            if(j==0 && (i==0 || i==m)){
                ft_putchar('A');
            }
            else if((j==0 || j==n) || (i==0 || i==m)){
                ft_putchar('B');
            }
            else if(j==n &&(i==0 || i==m))
            {
                ft_putchar('C');
            }
            else
            { 
                ft_putchar(' ');
            }
            j++;
        }
        i++;
    }
    ft_putchar(' '); 
}