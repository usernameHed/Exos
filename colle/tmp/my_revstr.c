/*
** my_revstr for  in /home/belfio_u/PISCINE/rendu/Piscine_C_J06/ex_01
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Mon Oct  6 09:18:35 2014 ugo belfiore
** Last update Wed Apr 29 10:47:06 2015 ugo belfiore
*/

#include "colle.h"

char	*my_revstr(char *str)
{
  int	i;
  int	len;
  int	swap;

  i = 0;
  len = 0;
  swap = 0;
  while (str[len] != '\0')
    len++;
  len--;
  while (i < len)
    {
      swap = str[i];
      str[i] = str[len];
      str[len] = swap;
      i++;
      len--;
    }
  return (str);
}
