/*
** Box.cpp for  in /home/belfio_u/rendu/rush/cpp_santa
**
** Made by Ugo
** Login   <belfio_u@epitech.net>
**
** Started on  Sat Jan 16 13:26:01 2016 Ugo
** Last update Sat Jan 16 18:50:26 2016 Ugo
*/

#include "Box.hh"

Box::Box()
	: Wrap("Wrap")
{
	this->Name = "Box";
	this->isOpen = true;
	this->present = NULL;
}

Box::Box(const Box &other)
	: Wrap(other)
{
	this->isOpen = other.isOpen;
	this->present = other.present;
}

Box &Box::operator=(const Box &other)
{
	this->isOpen = other.isOpen;
	this->present = other.present;
	this->type = other.type;
	return *this;
}

Box::~Box()
{
}

void		Box::wrapMeThat(Object *toy)
{
	if (toy == NULL)
	{
		std::cerr << "ERROR: can't wrap, toy doesn't exist !"
							<< std::endl;
		return;
	}
	else if (toy->getType().compare("Toy") != 0)
	{
		std::cerr << "ERROR: this object is not a Toy !"
							<< std::endl;
		return;
	}
	else if (this->isOpen && this->present)
		this->present = toy;
	std::cout << "tuuuut tuuut tuut" << std::endl;
}

std::string	Box::getType() const
{
	return this->type;
}

Object		*Box::openMe()
{
	this->isOpen = true;
	return	this->present;
}

void		Box::closeMe()
{
	this->isOpen = false;
}
