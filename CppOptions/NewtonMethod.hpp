//
//  NewtonMethod.hpp
//
// (c) 2020 Carlos Oliveira
//   This code is part of the book
//   "Options and Derivatives Programming in C++20: Algorithms and Programming Techniques for the Financial Industry 2nd Edition"
//    by Carlos Oliveira, Apress, 2020.
// For more information, visit http://coliveira.net


#ifndef NewtonMethod_hpp
#define NewtonMethod_hpp

#include "MathFunction.hpp"

//
// a Newton method implementation.
//
class NewtonMethod {
public:
    // Takes as parameter the function and its derivatives
    // 
    NewtonMethod(MathFunction &f, MathFunction &derivative);
    NewtonMethod(MathFunction &f, MathFunction &derivative, double error);
    NewtonMethod(const NewtonMethod &p);
    virtual ~NewtonMethod();
    NewtonMethod &operator=(const NewtonMethod &p);

    double getFunctionRoot(double initialValue);
private:
    MathFunction &m_f;
    MathFunction &m_derivative;
    double m_error;
};


#endif /* NewtonMethod_hpp */
