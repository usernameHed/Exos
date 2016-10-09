/*
** Parts.h for piscine_cpp_d07a in /home/belfio_u/rendu/piscine/piscine_cpp_d07a/ex01
**
** Made by Ugo
** Login   <belfio_u@epitech.net>
**
** Started on  Wed Jan 13 14:56:27 2016 Ugo
** Last update Wed Jan 13 14:56:27 2016 Ugo
*/

#ifndef _PARTS_H_
# define _PARTS_H_

#include <string>

class Arms
{
  std::string _serial;
  bool functionnal;
 public:
  Arms(std::string serial = "A-01", bool functionnal = true);
  ~Arms();
  bool isFunctionnal();
  std::string serial();
  void informations();
};

class Legs
{
  std::string _serial;
  bool functionnal;
public:
  Legs(std::string serial = "L-01", bool functionnal = true);
  ~Legs();
  bool isFunctionnal();
  std::string serial();
  void informations();
};

class Head
{
  std::string _serial;
  bool functionnal;
public:
  Head(std::string serial = "H-01", bool functionnal = true);
  ~Head();
  bool isFunctionnal();
  std::string serial();
  void informations();
};

#endif /*_PARTS_H_*/
