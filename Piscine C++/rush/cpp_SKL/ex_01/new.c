/*
** new.c for  in /home/liege_m/rendu/Piscine_C++/cpp_SKL/ex_01
** 
** Made by maxime liege
** Login   <liege_m@epitech.net>
** 
** Started on  Sat Jan  9 10:47:25 2016 maxime liege
** Last update Sat Jan  9 16:20:53 2016 maxime liege
*/

#include "new.h"
#include "raise.h"

Object		*new(Class* class)
{
  Object	*newObject;

  if (class == NULL)
    return NULL;
  if ((newObject = malloc(class->__size__)) == NULL)
    raise("Out of Memory");
  if (class->__init__ != NULL)
    {
      class->__init__(newObject);
      newObject = mempcy(newObject, class, sizeof(*class));
    }
  return (newObject);
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
