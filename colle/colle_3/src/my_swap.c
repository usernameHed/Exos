/*
** my_swap.c for  in /home/belfio_u/Hed/colle/colle_3/src
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue May 12 15:09:09 2015 ugo belfiore
** Last update Tue May 12 15:10:12 2015 ugo belfiore
*/

void	my_swap(int *a, int *b)
{
  int	ab;
  int	bb;

  ab = *a;
  bb = *b;
  *a = bb;
  *b = ab;
}
