/*
** my_getnbr.c for  in /home/belfio_u/Hed/colle/colle_3/src
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue May 12 14:23:58 2015 ugo belfiore
** Last update Tue May 12 14:24:05 2015 ugo belfiore
*/

#include "colle.h"

int     my_getnbr(char *str)
{
  int   nb;
  int   sign;
  int   i;

  nb = 0;
  sign = 0;
  i = 0;
  if (!str)
    return (0);
  while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
    if (str[i++] == '-')
      ++sign;
  while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
    nb = (nb * 10) + (str[i++] - '0');
  return (((sign % 2) == 1) ? ((nb) * (-1)) : (nb));
}
