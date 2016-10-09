/*
** wdmatch.c for  in /home/exam/rendu/ex_2
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Apr 15 09:13:06 2016 Exam User
** Last update Fri Apr 15 09:22:39 2016 Exam User
*/

#include <stdio.h>
#include <string.h>

void wd(char *s1, char *s2)
{
  int i = -1, j = -1, cnt = 0;
  while (s1[++i])
    {
      while (s2[++j])
	{
	  if (s1[i] == s2[j])
	    {
	      cnt++;
	      break;
	    }
	}
    }
  if (strlen(s1) == cnt)
    printf("%s\n", s1);
  else
    printf("\n");
}

int main(int ac, char **av)
{
  if (ac != 3)
    write(1, "\n", 1);
  else
    wd(av[1], av[2]);
  return (0);
}
