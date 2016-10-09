#ifndef _MY_ALGORITHMS_HPP__
# define _MY_ALGORITHMS_HPP__

#include <algorithm>
#include <iostream>
#include <iomanip>

template<typename T>
void vPrint(T const& contener, void (*showFuncPtr)(int))
{
  std::cout << "Dump (" << std::setw(2) << contener.size() << ')' << ' ';
  std::XXXXXXXXXX(contener.begin(), contener.end(), showFuncPtr);
  std::cout << std::endl;
}

template<typename T>
size_t vHowMany(T const& contener, int value)
{
  return std::XXXXXXXXXX(contener.begin(), contener.end(), value);
}

template<typename T>
bool vIsSimilar(T const& contener, int* values)
{
  return std::XXXXXXXXXX(contener.begin(), contener.end(), values);
}

template<typename T>
void vAssign(T itFrom, T itTo, int value)
{
  std::XXXXXXXXXX(itFrom, itTo, value);
}

template<typename T>
void vFindAndModify(T& contener, int oldValue, int newValue)
{
  std::XXXXXXXXXX(contener.begin(), contener.end(), oldValue, newValue);
}

template<typename T>
typename T::iterator vFindAndKill(T& contener, int value)
{
  return std::XXXXXXXXXX(contener.begin(), contener.end(), value);
}

template<typename T>
void vShift(T& contener, int nbShift)
{
  std::XXXXXXXXXX(contener.begin(), contener.begin() + nbShift, contener.end());
}

template<typename T, typename U>
void vApply(T itFrom, T itTo, U funcPtr)
{
  std::XXXXXXXXXX(itFrom, itTo, funcPtr);
}

template<typename T>
void vFlip(T& contener)
{
  std::XXXXXXXXXX(contener.begin(), contener.end());
}

template<typename T>
void vToAscOrder(T& contener)
{
  std::XXXXXXXXXX(contener.begin(), contener.end());
}

template<typename T>
void vToSpecificOrder(T& contener, bool (*cmpFuncPtr)(int, int))
{
  std::XXXXXXXXXX(contener.begin(), contener.end(), cmpFuncPtr);
}

template<typename T>
typename T::iterator vGiveMeTheFirst(T& contener, int value)
{
  return std::XXXXXXXXXX(contener.begin(), contener.end(), value);
}

template<typename T>
typename T::iterator vRemoveDuplicate(T& contener)
{
  return std::XXXXXXXXXX(contener.begin(), contener.end());
}

template<typename T>
void vFusionOrderedLists(T const & contener1, T const & contener2, T& contenerToFill)
{
  std::XXXXXXXXXX(contener1.begin(), contener1.end(), contener2.begin(), contener2.end(), contenerToFill.begin());
}

#endif
