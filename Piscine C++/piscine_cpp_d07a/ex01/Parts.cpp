/*
** Parts.cpp for piscine_cpp_d07a in /home/belfio_u/rendu/piscine/piscine_cpp_d07a/ex01
**
** Made by Ugo
** Login   <belfio_u@epitech.net>
**
** Started on  Wed Jan 13 14:56:22 2016 Ugo
** Last update Wed Jan 13 14:56:23 2016 Ugo
*/

#include "Parts.h"
#include <iostream>

Arms::Arms(std::string serial, bool functionnal)
{
  this->_serial = serial;
  this->functionnal = functionnal;
}

Arms::~Arms()
{
}

bool Arms::isFunctionnal()
{
  return (this->functionnal);
}

std::string   Arms::serial()
{
  return (this->_serial);
}

void    Arms::informations()
{
  if (this->functionnal)
    std::cout << "\t[Parts] Arms " << this->_serial << " status : OK" << std::endl;
  else
    std::cout << "\t[Parts] Arms " << this->_serial << " status : KO" << std::endl;
}

Legs::Legs(std::string serial, bool functionnal)
{
  this->_serial = serial;
  this->functionnal = functionnal;
}

Legs::~Legs()
{
}

bool  Legs::isFunctionnal()
{
  return (this->functionnal);
}

std::string   Legs::serial()
{
  return (this->_serial);
}

void    Legs::informations()
{
  if (this->functionnal)
    std::cout << "\t[Parts] Legs " << this->_serial << " status : OK" << std::endl;
  else
    std::cout << "\t[Parts] Legs " << this->_serial << " status : KO" << std::endl;
}

Head::Head(std::string serial, bool functionnal)
{
  this->_serial = serial;
  this->functionnal = functionnal;
}

Head::~Head()
{
}

bool    Head::isFunctionnal()
{
  return (this->functionnal);
}

std::string   Head::serial()
{
  return (this->_serial);
}

void    Head::informations()
{
  if (this->functionnal)
    std::cout << "\t[Parts] Head " << this->_serial << " status : OK" << std::endl;
  else
    std::cout << "\t[Parts] Head " << this->_serial << " status : KO" << std::endl;
}
