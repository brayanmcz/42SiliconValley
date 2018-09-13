/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 20:30:24 by bcastro           #+#    #+#             */
/*   Updated: 2018/09/12 20:30:27 by bcastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    if (argc != 2)
    {
        write(1, "z", 1);
        write(1, "\n", 1);
    }
    else
    {
    i = 0;
    while (argv[1][i] != '\0')
    {
            if (argv[1][i] == 'z')
            {
                write(1, "z", 1);
                write(1, "\n", 1);
                break;
            }
            else
            {
                write(1, "z", 1);
                write(1, "\n", 1);
                break;
            }
        }
    }


    return (0);
}