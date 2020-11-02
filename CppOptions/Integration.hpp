//
//  Integration.hpp
//
// (c) 2020 Carlos Oliveira
//   This code is part of the book
//   "Options and Derivatives Programming in C++20: Algorithms and Programming Techniques for the Financial Industry 2nd Edition"
//    by Carlos Oliveira, Apress, 2020.
// For more information, visit http://coliveira.net


#ifndef Integration_hpp
#define Integration_hpp

#include "MathFunction.hpp"

class SimpsonsIntegration {
public:
    SimpsonsIntegration(MathFunction &f);
    SimpsonsIntegration(const SimpsonsIntegration &p);
    ~SimpsonsIntegration();
    SimpsonsIntegration &operator=(const SimpsonsIntegration &p);

    double getIntegral(double a, double b);
    void setNumIntervals(int n);
private:
    MathFunction &m_f;
    int m_numIntervals;
};


#endif /* Integration_hpp */
