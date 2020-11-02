//
//  RungeKutta.hpp
//
// (c) 2020 Carlos Oliveira
//   This code is part of the book
//   "Options and Derivatives Programming in C++20: Algorithms and Programming Techniques for the Financial Industry 2nd Edition"
//    by Carlos Oliveira, Apress, 2020.
// For more information, visit http://coliveira.net


#ifndef RungeKutta_hpp
#define RungeKutta_hpp

#include "EulersMethod.hpp"

class RungeKuttaMethod {
public:
    RungeKuttaMethod(DEMathFunction &f);
    RungeKuttaMethod(const RungeKuttaMethod &p);
    ~RungeKuttaMethod();
    RungeKuttaMethod &operator=(const RungeKuttaMethod &p);
    double solve(int n, double x0, double y0, double c);
private:
    DEMathFunction &m_func;
};

#endif /* RungeKutta_hpp */
