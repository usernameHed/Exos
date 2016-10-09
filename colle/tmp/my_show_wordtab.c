/*
** my_show_wordtab.c for  in /home/belfio_u/rendu/EXOTEST/lib/my
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Sun Nov  2 18:00:38 2014 ugo belfiore
** Last update Wed Apr 29 10:47:15 2015 ugo belfiore
*/

#include "colle.h"

void	my_show_wordtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      my_putstr(tab[i++]);
      my_putchar(10);
    }
}
