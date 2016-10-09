//
// LittlePony.cpp for  in /home/liege_m/rendu/Piscine_C++/cpp_santa
// 
// Made by maxime liege
// Login   <liege_m@epitech.net>
// 
// Started on  Sat Jan 16 11:46:26 2016 maxime liege
// Last update Sat Jan 16 11:46:26 2016 maxime liege
//

#include "LittlePony.hh"
#include <iostream>

LittlePony::LittlePony(std::string const &name)
	: Toy(name)
{

}

LittlePony::LittlePony(const LittlePony &other)
	: Toy(other)
{

}

LittlePony &LittlePony::operator=(const LittlePony &other)
{
	this->Name = other.Name;
	return *this;
}

LittlePony::~LittlePony()
{

}

void		LittlePony::isTaken() const
{
	std::cout << "yo man" << std::endl;
}
