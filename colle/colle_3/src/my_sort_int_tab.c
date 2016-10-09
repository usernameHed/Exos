/*
** my_sort_int_tab.c for  in /home/belfio_u/Hed/colle/colle_3/src
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue May 12 14:55:49 2015 ugo belfiore
** Last update Tue May 12 15:25:28 2015 ugo belfiore
*/

#include "colle.h"

int	*my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	again;

  i = -1;
  again = 0;
  while (again == 0)
    {
      i = -1;
      again = 1;
      while (++i < size)
	{
	  if (tab[i] > tab[i + 1])
	    {
	      again = 0;
	      my_swap(&tab[i], &tab[i + 1]);
	    }
	}
    }
  return (tab);
}
