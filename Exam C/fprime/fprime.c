/*
** fprime.c for  in /home/exam/rendu/ex_2
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Apr 10 10:24:54 2015 Exam User
** Last update Fri Apr 10 10:46:48 2015 Exam User
*/

#include <stdio.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	fprime(int nb)
{
  int	div;

  div = 2;
  while (div < nb)
    {
      if (nb % div == 0)
	{
	  nb /= div;
	  printf("%d*", div);
	}
      else
	div++;
    }
  printf("%d\n", nb);
}

int	main(int ac, char **av)
{
  if (ac != 2)
    my_putchar(10);
  else
    fprime(atoi(av[1]));
  return (0);
}
