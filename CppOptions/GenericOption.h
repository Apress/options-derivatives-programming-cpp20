//
//  GenericOption.h
//
// (c) 2020 Carlos Oliveira
//   This code is part of the book
//   "Options and Derivatives Programming in C++20: Algorithms and Programming Techniques for the Financial Industry 2nd Edition"
//    by Carlos Oliveira, Apress, 2020.
// For more information, visit http://coliveira.net


#ifndef __CppOptions__GenericOption__
#define __CppOptions__GenericOption__

#include <stdio.h>

enum OptionType {
    OptionType_Call,
    OptionType_Put
};


class GenericOption {
public:
    GenericOption(double strike, OptionType type, double cost);
    GenericOption(const GenericOption &p);
    ~GenericOption();
    GenericOption &operator=(const GenericOption &p);

    double valueAtExpiration(double underlyingAtExpiration);
    double profitAtExpiration(double underlyingAtExpiration);
private:
    double m_strike;
    OptionType m_type;
    double m_cost;
};

#endif /* defined(__CppOptions__GenericOption__) */
