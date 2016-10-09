/*
** my_putstr.c for  in /home/belfio_u/Hed/colle/colle_2
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue May  5 14:09:52 2015 ugo belfiore
** Last update Tue May  5 14:10:45 2015 ugo belfiore
*/

#include "colle.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
