//
// Table.cpp for rush in /home/pazat_m/Epitech/piscineC++/cpp_santa/
//
// Made by Marc Pazat
// Login   <pazat_m@epitech.eu>
//
// Started on  Sat Jan 16 20:07:35 2016 Marc Pazat
// Last update Sun Jan 17 00:29:56 2016 Marc Pazat
//

#include "TablePePeNoel.hh"
#include <iostream>

TablePePeNoel::TablePePeNoel(Object **elems)
{
  this->elem = elems;
  if (this->getNbElems() > 10){
    std::cerr << "Too many objects on the table, we will keep only 10 of them." << std::endl;
    this->elem[10] = NULL;
  }
}

TablePePeNoel::TablePePeNoel(const TablePePeNoel &other)
{
  this->elem = other.elem;
  if (this->getNbElems() > 10){
    std::cerr << "Too many objects on the table, we will keep only 10 of them." << std::endl;
    this->elem[10] = NULL;
  }
}

TablePePeNoel &TablePePeNoel::operator=(const TablePePeNoel &other)
{
  this->elem = other.elem;
  if (this->getNbElems() > 10){
    std::cerr << "Too many objects on the table, we will keep only 10 of them." << std::endl;
    this->elem[10] = NULL;
  }

  return *this;
}

Object **TablePePeNoel::getObjects() const {
  return this->elem;
}

int   TablePePeNoel::getNbElems(){
  int n = 0;

  if (this->elem == NULL)
    return n;
  while(this->elem[n]){
    n++;
  }
  return n;
}

TablePePeNoel::~TablePePeNoel()
{
}

Object  *TablePePeNoel::takeFromTable()
{
	int	n;
	Object *my_item;
	n = 1;
	if(this->elem == NULL || this->elem[0] == NULL){
    std::cerr << "The table is empty" << std::endl;
    return NULL;
  }
  my_item = this->elem[0];
  while (this->elem[n]){
    this->elem[n - 1] = this->elem[n];
    n++;
  }
  this->elem[n - 1] = NULL;

  return my_item;
}

bool    TablePePeNoel::putOnTable(Object *other){
  if (this->getNbElems() >= 10){
    std::cerr << "Table already full" << std::endl;
    return false;
  }
  if (this->elem == NULL){
    this->elem = new Object*[2];
    this->elem[1] = NULL;
    this->elem[0] = other;
  }
  else{
      this->addRow(other);
    }
  return true;
}

void      TablePePeNoel::addRow(Object *other){
  int len = this->getNbElems();
  int n = 0;

  Object **tab = new Object*[len + 2];

  tab[len] = other;
  tab[len + 1] = NULL;
  while (tab[n] != other){
    tab[n] = this->elem[n];
    n++;
  }
  this->elem = tab;
}
