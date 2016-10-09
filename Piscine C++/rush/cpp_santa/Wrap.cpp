//
// Wrap.cpp for  in /home/charpa_j/Rendu/PiscineCPP/cpp_santa
//
// Made by charpa_j
// Login   <charpa_j@epitech.net>
//
// Started on  Sat Jan 16 17:14:19 2016 charpa_j
// Last update Sat Jan 16 18:13:08 2016 Marc Pazat
//


#include "Wrap.hh"

Wrap::Wrap(std::string const &type)
{
	this->type = type;
	this->present = NULL;
}

Wrap::Wrap(const Wrap &other)
{
	this->type = other.type;
	this->present = NULL;
}

Wrap &Wrap::operator=(const Wrap &other)
{
	this->type = other.type;
	return *this;
}

Wrap::~Wrap()
{

}

std::string		Wrap::getType() const
{
	return this->type;
}

void			Wrap::isTaken() const
{
  std::cout << "whistles while working" << std::endl;
}

std::string		Wrap::getName() const{
	return this->Name;
}
