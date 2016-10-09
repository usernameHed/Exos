//
// MyUnitTestWrap.cpp for  in /home/liege_m/rendu/Piscine_C++/cpp_santa
//
// Made by maxime liege
// Login   <liege_m@epitech.net>
//
// Started on  Sat Jan 16 17:24:44 2016 maxime liege
// Last update Sun Jan 17 00:29:57 2016 maxime liege
//

#include "Object.hh"
#include "Toy.hh"
#include "Wrap.hh"
#include "Box.hh"
#include "GiftPaper.hh"

Object	*MyUnitTests(Object **tab)
{
  int	i;
  Box		*box;
  GiftPaper	*paper;
  Toy		*toy;

  box = NULL;
  paper = NULL;
  toy = NULL;
  if (tab == NULL)
    {
      std::cerr << "Objets vides" << std::endl;
      return NULL;
    }
  i = 0;
  while (tab[i])
    {
      if (tab[i]->getType() == "Toy")
	toy = (Toy*)tab[i];
      else if (tab[i]->getName() == "Box")
	box = (Box*)tab[i];
      else if (tab[i]->getName() == "GiftPaper")
	paper = (GiftPaper*)tab[i];
      i++;
    }
  if (i != 3){
    std::cerr << "Error: Wrong number of arguments" << std::endl;
    return NULL;
  }
  if (box == NULL || toy == NULL || paper == NULL)
    {
      std::cerr << "Error: Missing one or more elements to wrap" << std::endl;
      return NULL;
    }
  box->wrapMeThat(toy);
  box->closeMe();
  paper->wrapMeThat(box);
  return (paper);
}
