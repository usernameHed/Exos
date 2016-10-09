/*
** my_strlen.c for  in /home/belfio_u/Hed/colle/colle_2/src
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue May  5 14:38:56 2015 ugo belfiore
** Last update Tue May  5 14:39:38 2015 ugo belfiore
*/

#include "colle.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
