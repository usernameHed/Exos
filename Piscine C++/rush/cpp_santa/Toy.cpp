//
// Toy.cpp for  in /home/liege_m/rendu/Piscine_C++/cpp_santa
//
// Made by maxime liege
// Login   <liege_m@epitech.net>
//
// Started on  Sat Jan 16 11:46:35 2016 maxime liege
// Last update Sat Jan 16 16:11:16 2016 Marc Pazat
//

#include "Toy.hh"
#include <iostream>

Toy::Toy(std::string const &name)
{
	this->type = "Toy";
	this->Name = name;
}

Toy::Toy(const Toy &other)
{
	this->type = other.type;
	this->Name = other.Name;
}

Toy &Toy::operator=(const Toy &other)
{
	this->type = other.type;
	this->Name = other.Name;
	return *this;
}

Toy::~Toy()
{

}

std::string		Toy::getType() const
{
	return this->type;
}

std::string		Toy::getName() const
{
	return this->Name;
}
