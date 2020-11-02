//
//  DesignPatterns.cpp
//
// (c) 2020 Carlos Oliveira
//   This code is part of the book
//   "Options and Derivatives Programming in C++20: Algorithms and Programming Techniques for the Financial Industry 2nd Edition"
//    by Carlos Oliveira, Apress, 2020.
// For more information, visit http://coliveira.net


#include "DesignPatterns.hpp"

ClearingHouse *ClearingHouse::s_clearingHouse = nullptr;


ClearingHouse::ClearingHouse()
{
}

ClearingHouse::~ClearingHouse()
{

}

ClearingHouse &ClearingHouse::getClearingHouse()
{
    if (!s_clearingHouse)
    {
        s_clearingHouse = new ClearingHouse();
    }
    return *s_clearingHouse;
}

void ClearingHouse::clearTrade(const Trade &t)
{
}

void useClearingHouse()
{
    Trade trade;
    ClearingHouse &ch = ClearingHouse::getClearingHouse();
    ch.clearTrade(trade);
}
