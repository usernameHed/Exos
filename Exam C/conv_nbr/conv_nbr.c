/*
** conv_nbr.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Apr  1 09:10:06 2016 Exam User
** Last update Fri Apr  1 09:56:42 2016 Exam User
*/

#include <stdio.h>
#include <string.h>

void my_putchar(char c)
{
  write (1, &c, 1);
}

void rec_print(int rec, char *base)
{
  if (rec <= 0)
    return;
  rec_print(rec / strlen(base), base);
  write (1, &(base[rec % strlen(base)]), 1);
}

int main(int ac, char **av)
{
  if (ac != 4)
    my_putchar(10);
  else
    {
      char str[300];
      int val = strtol(av[1], NULL, strlen(av[2]));
      if (val < 0)
	{
	  val *= -1;
	  my_putchar('-');
	}
      rec_print(val, av[3]);
      my_putchar(10);
      }
  return (0);
}

