/*
** my_square_root.c for  in /home/belfio_u/PISCINE/rendu/Piscine_C_J05
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Sun Oct  5 18:52:35 2014 ugo belfiore
** Last update Wed Apr 29 10:48:02 2015 ugo belfiore
*/

#include "colle.h"

int	my_square_root(int cute)
{
  int	i;

  i = 0;
  if (cute == 1)
    return (1);
  while (i <= (cute / 2))
    {
      if (cute == (i * i))
	return (i);
      i++;
    }
  return (0);
}
