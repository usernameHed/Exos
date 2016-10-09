//
// MyUnitTest.cpp for  in /home/liege_m/rendu/Piscine_C++/cpp_santa
// 
// Made by maxime liege
// Login   <liege_m@epitech.net>
// 
// Started on  Sat Jan 16 12:29:37 2016 maxime liege
// Last update Sat Jan 16 13:02:17 2016 maxime liege
//

#include "Object.hh"
#include "LittlePony.hh"
#include "Teddy.hh"

Object		**MyUnitTests()
{
  Object	**obj = new Object*[2];

  obj[0] = new LittlePony("gay pony");
  obj[1] = new Teddy("bisounours");
  return obj;
}
