//
// main.cpp for  in /home/liege_m/rendu/Piscine_C++/cpp_santa
//
// Made by maxime liege
// Login   <liege_m@epitech.net>
//
// Started on  Sat Jan 16 12:49:48 2016 maxime liege
// Last update Sun Jan 17 01:32:29 2016 maxime liege
//

#include "Toy.hh"
#include "Object.hh"
#include "LittlePony.hh"
#include "Teddy.hh"
#include "Wrap.hh"
#include "Box.hh"
#include "GiftPaper.hh"
#include "TablePePeNoel.hh"
#include <iostream>

int main()
{
  Object **obj = MyUnitTests();
  Object	**tab = new Object*[4];

  std::cout << "== UnitTestToy : START ==" << std::endl;
  obj[0]->isTaken();
  obj[1]->isTaken();

  tab[0] = new LittlePony("gay pony");
  tab[1] = new Box();
  tab[2] = new GiftPaper();
  tab[3] = NULL;
  std::cout << *tab[0] << std::endl;
  std::cout << *tab[1] << std::endl;
  std::cout << *tab[2] << std::endl;
  std::cout << "== UnitTestToy : END ==" << std::endl << std::endl;

  std::cout << "== Chapter UnitTestWrap : START ==" << std::endl;
  MyUnitTests(tab);
  std::cout << *tab[0] << std::endl;
  std::cout << *tab[1] << std::endl;
  std::cout << *tab[2] << std::endl;
  delete(tab[0]);
  delete(tab[1]);
  delete(tab[2]);
  
  tab[0] = new GiftPaper();
  tab[1] = new Teddy("Bear");
  tab[2] = new Box();
  tab[3] = NULL;
  MyUnitTests(tab);
  std::cout << *tab[0] << std::endl;
  std::cout << *tab[1] << std::endl;
  std::cout << *tab[2] << std::endl;
  delete(tab[0]);
  delete(tab[1]);
  delete(tab[2]);

  tab[0] = new Box();
  tab[1] = new Teddy("Bear");
  tab[2] = new Box();
  tab[3] = NULL;
  MyUnitTests(tab);
  std::cout << *tab[0] << std::endl;
  std::cout << *tab[1] << std::endl;
  std::cout << *tab[2] << std::endl;
  delete(tab[0]);
  delete(tab[1]);
  delete(tab[2]);
  std::cout << "== UnitTestWrap : END ==" << std::endl << std::endl;
  
  std::cout << "== TablePePeNoelTest : START ==" << std::endl;
  TablePePeNoel n(tab);
  n.putOnTable(new LittlePony("gay pony"));
  n.putOnTable(new LittlePony("gay pony"));
  n.putOnTable(new LittlePony("gay pony"));
  n.putOnTable(new LittlePony("gay pony"));
  n.putOnTable(new LittlePony("gay pony"));
  n.putOnTable(new LittlePony("gay pony"));
  n.putOnTable(new LittlePony("gay pony"));
  n.putOnTable(new LittlePony("gay pony"));
  n.putOnTable(new LittlePony("gay pony"));
  n.putOnTable(new LittlePony("gay pony"));
  n.putOnTable(new LittlePony("gay pony"));
  n.putOnTable(new LittlePony("gay pony"));
  return (0);
}
