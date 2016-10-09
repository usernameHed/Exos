/*
** maff_alpha.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri May 22 09:12:29 2015 Exam User
** Last update Fri May 22 09:36:07 2015 Exam User
*/

int	my_max(int tab[], int len)
{
  int	i;
  int	big;

  i = 0;
  big = -2000000000;
  while (i < len)
    {
      if (tab[i] > big)
	big = tab[i];
      i++;
    }
  if (big == -2000000000)
    big = 0;
  return (big);
}
