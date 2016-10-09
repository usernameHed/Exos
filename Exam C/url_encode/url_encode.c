/*
** url_encode.c for  in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Apr 15 09:33:47 2016 Exam User
** Last update Fri Apr 15 10:05:00 2016 Exam User
*/

#include <stdio.h>
#include <string.h>

int isEncodable(char c)
{
  if (c == ':' || c == '\'' || c == '/' || c == '+' || c == '#' || c == '"'
      || c == ';' || c == '?' || c == '@' || c == '=' || c == '&' || c == '#'
      || c == '<' || c == '>' || c == '%' || c == '{' || c == '}' || c == '|'
      || c == '\\' || c == '^' || c == '~' || c == '[' || c == ']'
      || c == '`')
    return (1);
  return (0);
}

void encode(char *str)
{
  int i = -1;
  while (str[++i])
    {
      if (str[i] == ' ')
	printf("+");
      else if (isEncodable(str[i]))
	printf("%%%X", str[i]);
      else
	printf("%c", str[i]);
    }
  printf("\n");
}

int main(int ac, char **av)
{
  if (ac != 2)
    write(1, "\n", 1);
  else
    {
      if (av[1] == "")
	write(1, "\n", 1);
      else
	encode(av[1]);
    }
  return (0);
}
