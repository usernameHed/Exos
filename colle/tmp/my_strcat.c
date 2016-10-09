/*
** my_strcat.c for  in /home/belfio_u/PISCINE/rendu/Piscine_C_J07
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue Oct  7 21:31:05 2014 ugo belfiore
** Last update Wed Apr 29 10:48:12 2015 ugo belfiore
*/

#include "colle.h"

char	*my_strcat(char *tab2, char *tab1)
{
  int	i;
  int	len;

  i = 0;
  len = 0;
  while (tab1[len] != '\0')
    len++;
  while (tab2[i] != '\0')
    {
      tab1[len] = tab2[i];
      len++;
      i++;
    }
  return (tab1);
}
