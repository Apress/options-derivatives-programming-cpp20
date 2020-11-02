//
//  Functional.hpp
//
// (c) 2020 Carlos Oliveira
//   This code is part of the book
//   "Options and Derivatives Programming in C++20: Algorithms and Programming Techniques for the Financial Industry 2nd Edition"
//    by Carlos Oliveira, Apress, 2020.
// For more information, visit http://coliveira.net


#ifndef Functional_hpp
#define Functional_hpp

class SimpleOption {
public:
   // other definitions here
   int daysToExpiration() const { return m_daysToExpiration; }

   double getInTheMoneyProbability(int numDays, double currentUnderlyingPrice) const ;
private:
   int m_daysToExpiration;
};


class OptionComparison {
public:
   OptionComparison(bool directionLess);
   OptionComparison(const OptionComparison &p);
   ~OptionComparison();
   OptionComparison &operator=(const OptionComparison &p);

   bool operator()(const SimpleOption &o1, const SimpleOption &o2);
private:
   bool m_directionLess;
};


#endif /* Functional_hpp */
