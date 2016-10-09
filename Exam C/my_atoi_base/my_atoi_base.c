/*
** my_atoi_base.c for  in /home/exam/rendu/ex_3
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Mar 18 09:07:54 2016 Exam User
** Last update Fri Mar 18 09:30:39 2016 Exam User
*/

#include <stdlib.h>
#include <string.h>

int     my_atoi_base(char *str, char *base)
{
  long long int val = strtoll(str, NULL, strlen(base));

  return (val);
}
