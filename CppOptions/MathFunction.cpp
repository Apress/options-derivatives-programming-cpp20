//
//  MathFunction.cpp
//
// (c) 2020 Carlos Oliveira
//   This code is part of the book
//   "Options and Derivatives Programming in C++20: Algorithms and Programming Techniques for the Financial Industry 2nd Edition"
//    by Carlos Oliveira, Apress, 2020.
// For more information, visit http://coliveira.net

#include "MathFunction.hpp"

#include <iostream>

using std::cout;
using std::endl;


PolynomialFunction::PolynomialFunction(const std::vector<double> &coef)
: m_coeficients(coef)
{
}

PolynomialFunction::PolynomialFunction(const PolynomialFunction &p)
: m_coeficients(p.m_coeficients)
{
}

PolynomialFunction::~PolynomialFunction()
{
}

PolynomialFunction &PolynomialFunction::operator=(const PolynomialFunction &p)
{
    if (this != &p)
    {
        m_coeficients = p.m_coeficients;
    }
    return *this;
}

double PolynomialFunction::operator()(double x)
{
    int n = (int)m_coeficients.size();
    double y = 0;
    int i;
    for (i=0; i<n-1; ++i)
    {
        y += m_coeficients[i];
        y *= x;
    }
    if (i < n) {
        y += m_coeficients[i];
    }
    return y;
}

int main_afunc()
{
    PolynomialFunction f( { 1, 0, 0 } );

    double begin = -2, end = 2;
    double step = (end - begin) / 100.0;
    for (int i=0; i<100; ++i)
    {
        cout <<  begin + step * i << ", ";
    }
    cout << endl;
    for (int i=0; i<100; ++i)
    {
        cout << f( begin + step * i) << ", ";
    }

    return 0;
}

#if 0

#include <boost/math/distributions/chi_squared.hpp>
namespace boost{ namespace math{

//template <class RealType, // = double,
//          class Policy> //   = policies::policy<> >
//class chi_squared_distribution;

typedef chi_squared_distribution<> chi_squared;

template <class RealType, class Policy>
class chi_squared_distribution
{
public:
   typedef RealType  value_type;
   typedef Policy    policy_type;

   // Constructor:
   chi_squared_distribution(RealType i);

   // Accessor to parameter:
   RealType degrees_of_freedom()const;

   // Parameter estimation:
   static RealType find_degrees_of_freedom(
      RealType difference_from_mean,
      RealType alpha,
      RealType beta,
      RealType sd,
      RealType hint = 100);
};

}} // namespaces


#endif
