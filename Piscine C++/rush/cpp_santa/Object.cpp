//
// Object.cpp for  in /home/charpa_j/Rendu/PiscineCPP/cpp_santa
//
// Made by charpa_j
// Login   <charpa_j@epitech.net>
//
// Started on  Sat Jan 16 15:12:57 2016 charpa_j
// Last update Sat Jan 16 23:42:10 2016 Marc Pazat
//

#include "Object.hh"

Object::~Object()
{

}

std::ostream	&operator<<(std::ostream &os, const Object &other)
{
	if (os != std::cout)
		return os;
	if (!&other){
		os << "It's impossible to display this object";
		return os;
	}
	os << "The object called '" << other.getName() << "' is a "
				<< other.getType();
	return os;
}
