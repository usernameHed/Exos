/*
** hidnp.c for  in /home/exam/rendu/ex_2
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Mar  4 08:22:56 2016 Exam User
** Last update Fri Mar  4 08:35:39 2016 Exam User
*/

#include <string.h>

void hidenp(char *s1, char *s2)
{
  int i = -1, j = 0, cnt = 0;
  while (s1[++i])
    {
      while (s2[j])
	{
	  if (s1[i] == s2[j])
	    {
	      cnt++;
	      break;
	    }
	  j++;
	}
    }
  if (cnt == strlen(s1))
    write(1, "1\n", 2);
  else
    write(1, "0\n", 2);
}

int main(int ac, char **av)
{
  if (ac < 3)
    write(1, "\n", 1);
  else
    hidenp(av[1], av[2]);
  return (0);
}
