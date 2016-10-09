/*
** new.c for  in /home/liege_m/rendu/Piscine_C++/cpp_SKL/ex_01
** 
** Made by maxime liege
** Login   <liege_m@epitech.net>
** 
** Started on  Sat Jan  9 10:47:25 2016 maxime liege
** Last update Sat Jan  9 18:40:30 2016 maxime liege
*/

#include <string.h>
#include <stdarg.h>
#include "object.h"
#include "new.h"
#include "raise.h"
#include "point.h"
#include "vertex.h"

Object		*new(Class* class, ...)
{
  va_list	ap;

  if (class == NULL)
    return NULL;
  va_start(ap, class);  
  return (va_new(class, &ap));
}

void	delete(Object *ptr)
{
  Class	*obj;
  
  obj = (Class *) ptr;
  if (obj->__del__ != NULL)
    obj->__del__(ptr);
  if (obj != NULL)
    free(obj);
}

Object		*va_new(Class *class, va_list *ap)
{
  Object	*newObject;
  
  if ((newObject = malloc(class->__size__)) == NULL)
    raise("Out of Memory");
  if (class->__init__ != NULL)
    {
      class->__init__(newObject, ap);
      newObject = memcpy(newObject, class, sizeof(*class));
    }
  return (newObject);
}
