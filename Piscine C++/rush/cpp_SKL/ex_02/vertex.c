/*
** vertex.c for  in /home/liege_m/rendu/Piscine_C++/cpp_SKL/ex_02
** 
** Made by maxime liege
** Login   <liege_m@epitech.net>
** 
** Started on  Sat Jan  9 14:33:49 2016 maxime liege
** Last update Sat Jan  9 19:28:05 2016 ugo belfiore
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "vertex.h"

typedef struct
{
  Class	base;
  int	x;
  int	y;
  int	z;
  char	*str;
}	VertexClass;

static void	Vertex_ctor(Object *self, va_list *ap)
{
  VertexClass	*vertex;
  
  vertex = (VertexClass *) self;
  if (ap != NULL)
    {
      vertex->x = va_arg(*ap, int);
      vertex->y = va_arg(*ap, int);
      vertex->z = va_arg(*ap, int);
    }
  //vertex, point;
  vertex->str = malloc(sizeof(char) * 100);
}

static void	Vertex_dtor(Object *self)
{
  VertexClass	*vertex;
  
  vertex = (VertexClass *) self;
  vertex->x = 0;
  vertex->y = 0;
  vertex->z = 0;
  free(vertex->str);
}

static char const*	Vertex_str(Object *self)
{
  VertexClass		*vertex;
  Class			*class;
  
  vertex = (VertexClass *) self;
  class = (Class *) self;
  if (class->__name__)
    snprintf(vertex->str, 100, "<%s (%d, %d, %d)>", class->__name__, 
	     vertex->x, vertex->y, vertex->z);
  return (vertex->str);
}	

static VertexClass _desc = {
  { sizeof(VertexClass), "Vertex", &Vertex_ctor, &Vertex_dtor, &Vertex_str },
  0, 0, 0, NULL
};

Class* Vertex = (Class*) &_desc;
