/*
** ConveyorBelt.cpp for  in /home/belfio_u/rendu/rush/cpp_santa
**
** Made by Ugo
** Login   <belfio_u@epitech.net>
**
** Started on  Sat Jan 16 20:05:16 2016 Ugo
// Last update Sun Jan 17 00:49:28 2016 charpa_j
*/

#include "ConveyorBelt.hh"
#include "Box.hh"

ConveyorBeltPePeNoel::ConveyorBeltPePeNoel()
{
	this->o = NULL;
}

ConveyorBeltPePeNoel::~ConveyorBeltPePeNoel()
{
  if (this->o)
    delete (o);
}

void ConveyorBeltPePeNoel::IN()
{
  this->put(new Box());
}

void ConveyorBeltPePeNoel::OUT()
{
  if (this->take())
    delete (this->o);
}

Object *ConveyorBeltPePeNoel::take()
{
	if (this->o)
		return this->o;
  std::cerr << "ERROR: there are no object to take"
	    << std::endl;
  return (NULL);
}

bool	ConveyorBeltPePeNoel::put(Object *o)
{
  if (!this->o)
  {
    this->o = o;
    return (true);
  }
  std::cerr << "ERROR: there is any object to throw on the ConveyorBelt !"
	    << std::endl;
  return (false);
}
