/*
** my_strlen.c for  in /home/belfio_u/PISCINE/rendu/Piscine_C_J04
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Fri Oct  3 21:15:04 2014 ugo belfiore
** Last update Wed Apr 29 10:48:31 2015 ugo belfiore
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
