/*
** my_is_prime.c for  in /home/belfio_u/PISCINE/rendu/Piscine_C_J05
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Sun Oct  5 19:08:52 2014 ugo belfiore
** Last update Wed Apr 29 10:44:23 2015 ugo belfiore
*/

#include "colle.h"

int	my_is_prime(int cute)
{
  int	i;

  i = 0;
  while (i < cute)
    {
      if (cute <= 1)
	return (0);
      if (cute % i == 0)
	return (0);
      i++;
    }
  return (1);
}
