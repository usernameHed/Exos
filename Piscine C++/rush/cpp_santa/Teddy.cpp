//
// Teddy.cpp for  in /home/liege_m/rendu/Piscine_C++/cpp_santa
// 
// Made by maxime liege
// Login   <liege_m@epitech.net>
// 
// Started on  Sat Jan 16 11:45:19 2016 maxime liege
// Last update Sat Jan 16 11:45:20 2016 maxime liege
//

#include "Teddy.hh"
#include <iostream>

Teddy::Teddy(std::string const &name)
	: Toy(name)
{
}

Teddy::Teddy(const Teddy &other)
	: Toy(other)
{

}

Teddy &Teddy::operator=(const Teddy &other)
{
	this->Name = other.Name;
	return *this;
}

Teddy::~Teddy()
{

}

void		Teddy::isTaken() const
{
	std::cout << "gra hu" << std::endl;
}
