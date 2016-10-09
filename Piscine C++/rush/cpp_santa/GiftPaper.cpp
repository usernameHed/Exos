/*
** GiftPaper.cpp for cpp_santa in /home/belfio_u/rendu/rush/cpp_santa
**
** Made by Ugo
** Login   <belfio_u@epitech.net>
**
** Started on  Sat Jan 16 13:05:03 2016 Ugo
** Last update Sat Jan 16 18:53:59 2016 Ugo
*/

#include "GiftPaper.hh"

GiftPaper::GiftPaper()
	: Wrap("Wrap")
{
	this->Name = "GiftPaper";
}

GiftPaper::GiftPaper(const GiftPaper &other)
	: Wrap(other)
{

}

GiftPaper &GiftPaper::operator=(const GiftPaper &other)
{
  if (&other != this)
  {

  }
  return (*this);
}

GiftPaper::~GiftPaper()
{
}

void		GiftPaper::wrapMeThat(Object *box)
{
	if (box == NULL)
	{
		std::cerr << "ERROR: can't wrap, box dosn't exist !"
							<< std::endl;
		return;
	}
	else if (box->getName().compare("Box") != 0)
	{
		std::cerr << "ERROR: this object is not a Box !"
							<< std::endl;
		return;
	}
	else if (!this->present)
		this->present = box;
}

std::string		GiftPaper::getType() const
{
	return this->type;
}

Object			*GiftPaper::openMe()
{
	return this->present;
}

void			GiftPaper::closeMe()
{
}
