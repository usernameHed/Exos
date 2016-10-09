/*
** point.c for  in /home/liege_m/rendu/Piscine_C++/cpp_SKL/ex_02
** 
** Made by maxime liege
** Login   <liege_m@epitech.net>
** 
** Started on  Sat Jan  9 13:12:29 2016 maxime liege
** Last update Sat Jan  9 21:27:47 2016 ugo belfiore
*/

#include <stdlib.h>
#include "point.h"
#include <stdio.h>
#include <string.h>
#include "new.h"

typedef struct
{
  Class	base;
  int	x;
  int	y;
  char	*str;
}	PointClass;

static void	Point_ctor(Object *self, va_list *ap)
{
  PointClass	*point;
  Class		*class;

  class = (Class *) self;
  (void) class;
  point = (PointClass *) self;
  if (ap != NULL)
    {
      point = (PointClass *) self;
      point->x = va_arg(*ap, int);
      point->y = va_arg(*ap, int);
    }
  point->str = malloc(sizeof(char) * 100);
  va_end(*ap);
}

static void	Point_dtor(Object *self)
{
  PointClass	*point;
  
  point = (PointClass *) self;  
  point->x = 0;
  point->y = 0;
  free(point->str);
  point->str = NULL;
}

static char const	*Point_to_str(Object *self)
{
  PointClass		*point;
  Class                 *class;

  point = (PointClass *) self;
  class = (Class *) self;
  if (class->__name__ != NULL)
    snprintf(point->str, 100, "<%s (%d, %d)>", class->__name__,
	     point->x, point->y);
  return (point->str);
}

static PointClass _description = {
  { sizeof(PointClass), "Point", &Point_ctor, &Point_dtor, &Point_to_str },
  0, 0, NULL
};

static PointClass* Point_add(const PointClass* self, const PointClass* other)
{
  return (PointClass *) new(Point, self->x + other->x, self->y + other->y);
}

static PointClass* Point_sub(const PointClass* self, const PointClass* other)
{
  return (PointClass *) new(Point, self->x - other->x, self->y - other->y);
}

Class* Point = (Class*) &_description;
